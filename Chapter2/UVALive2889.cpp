#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1e9+7;

//judge length n is odd or even 
//n is odd: 9*10^max(0,n/2)
//n is even: 9*10^max(0,n/2-1)

ll fac[20],tpow[20];
int cnt=0;
void pre(){
    tpow[0]=1;
    for(cnt=1;cnt<20;++cnt){
        tpow[cnt]=tpow[cnt-1]*10;
        fac[cnt]=9*tpow[max(0,(cnt&1?cnt/2:cnt/2-1))];
        fac[cnt]+=fac[cnt-1];
        if(fac[cnt]>=2e9) break;
    }
}

int main(){
    pre();
    int n;
    while(scanf("%d",&n)==1&&n){
        for(int i=1;i<=cnt;++i){    
            if(fac[i]>=n){
                ll half=n-fac[i-1]+tpow[(i-1)/2]-1;
                printf("%lld",half);
                if(!(i&1)) printf("%lld",half%10);
                half/=10;
                while(half){
                    printf("%lld",half%10);
                    half/=10;
                }
                puts("");
                break;
            }
        }
    }
}
