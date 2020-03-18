#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=3e2+5;

int f[100],p[100],cnt=0;

int main() {
    //ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int T,A,C;
    cin>>T;
    while(T--){
        cin>>A>>C;
        if(C%A){
            cout<<"NO SOLUTION"<<endl;
            continue;
        }
        cnt=0;
        if(!(C&1)){
            p[cnt]=2;
            f[cnt++]=0;
            while(!(C&1)){
                ++f[cnt-1];
                C>>=1;
            }
        }
        for(int i=3;1LL*i*i<=C;++i){
            if(C%i==0){
                p[cnt]=i;
                f[cnt++]=0;
                while(C%i==0){
                    ++f[cnt-1];
                    C/=i;
                }
            }
        }
        if(C!=1){
            p[cnt]=C;
            f[cnt++]=1;
        }
        int ans=1,tmp;
        for(int i=0;i<cnt;++i){
            if(A%p[i]){
                while(f[i]){
                    ans*=p[i];
                    --f[i];
                }
            }
            else{
                tmp=0;
                while(A%p[i]==0){
                    A/=p[i];
                    ++tmp;
                }
                if(tmp<f[i]){
                    while(f[i]){
                        ans*=p[i];
                        --f[i];
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
