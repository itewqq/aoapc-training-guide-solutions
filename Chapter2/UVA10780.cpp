#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=3e2+5;

int f(int p,int cnt,int n){
    int ret=0,tp=p;
    while(n/p){
        ret+=n/p;
        p*=tp;
    }
    return ret/cnt;
}

int main() {
    int T,m,tm,n,ans,id=0;
    cin>>T;
    while(T--){
        ++id;
        cin>>m>>n;
        ans=1e9;
        for(int i=2,cnt;1LL*i*i<=m;++i){
            if(m%i==0){
                cnt=0;
                while(m%i==0){
                    ++cnt;
                    m/=i;
                }
                ans=min(ans,f(i,cnt,n));
            }
        }
        if(m!=1){
            ans=min(ans,f(m,1,n));
        }
        cout<<"Case "<<id<<":\n";
        if(ans){
            cout<<ans<<"\n";
        }else{
            cout<<"Impossible to divide\n";
        }
    }
    return 0;
}
