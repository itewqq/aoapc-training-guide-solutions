#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1e9+7;
ll qpow(ll a,int b){
    ll ret=1;
    while(b){
        if(b&1)
            ret=(ret*a)%MOD;
        a=(a*a)%MOD;
        b>>=1;
    }
    return ret;
}


int main(){
    int T,n,cs=0;
    scanf("%d",&T);
    while(T--){
        ++cs;
        scanf("%d",&n);
        printf("Case #%d: %lld\n",cs,(1LL*n*qpow(2,n-1))%MOD );
    }
}
