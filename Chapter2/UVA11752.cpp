#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int maxn = (1<<16)+5;//16?
const int maxm = 305;

//overflow
bool ok(ull a,ull b){
    return ULLONG_MAX/a>=b;
}
//not prime
int notprime[70],prime[70],tot=0;
void pre(){
    for(int i=2,j;i<70;++i){
        if(!notprime[i]) prime[tot++]=i;
        for(j=0;j<tot&&prime[j]*i<70;++j){
            notprime[prime[j]*i]=1;
            if(i%prime[j]==0) break;
        }
    }
}

ull hashx[maxn*64],pcnt=0;

int main(){
    pre();
    ull ans;
    for(int e=4,flag;e<64;++e){//powers
        if(!notprime[e]) continue;
        for(int x=1,i;x<maxn;++x){
            ans=1;
            for(i=1;i<=e;++i){
                if(ok(ans,x)){
                    ans*=x;
                }else break;
            }
            if(i<=e) break;
            hashx[++pcnt]=ans;
        }
    }
    sort(hashx+1,hashx+1+pcnt);
    printf("%llu\n",hashx[1]);
    for(int i=2,j=1;i<=pcnt;++i)
        if(hashx[j]!=hashx[i]){
            hashx[++j]=hashx[i];
            printf("%llu\n",hashx[j]);
        }

}
