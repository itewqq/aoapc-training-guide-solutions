#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 305;
const int maxm = 305;

int fac[maxn],p[maxn],cnt;

int main(){
    int n;
    while(scanf("%d",&n)==1&&n){
        printf("%d ",n);
        cnt=0;
        if(!(n&1)){
            p[cnt]=2,fac[cnt]=0;
            while(!(n&1)){
                ++fac[cnt];
                n>>=1;
            }
            ++cnt;
        }
        for(int i=3;1LL*i*i<=n;i+=2){
            if(n%i==0){
                p[cnt]=i,fac[cnt]=0;
                while(n%i==0){
                    ++fac[cnt];
                    n/=i;
                }
                ++cnt;
            }
        }
        if(n!=1){
            p[cnt]=n,fac[cnt]=1;
            ++cnt;
        }
        ll ans=1;
        for(int i=0;i<cnt;++i){
            // cout<<p[i]<<" "<<fac[i]<<endl;
            ans*=2*fac[i]+1;
        }
        printf("%lld\n",(1+ans)/2);
    }
}
