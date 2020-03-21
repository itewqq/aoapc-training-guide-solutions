#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll C[20][20],ni[20],w[20];
void pre(){
    C[0][0]=1,ni[0]=1,w[0]=0;
    for(int i=1;i<=12;++i){
        C[i][0]=1;
        ni[i]=ni[i-1]*i;
        w[i]=w[i-1]*10+1;
        for(int j=1;j<=12;++j){
            C[i][j]=C[i-1][j]+C[i-1][j-1];
        }
    }
}
int cnt[10];
int main(){
    // freopen("1.txt","r",stdin);
    // freopen("2.txt","w",stdout);
    pre();
    int n;
    while(scanf("%d",&n)==1&&n){
        memset(cnt,0,sizeof(cnt));
        for(int i=1,x;i<=n;++i){
            scanf("%d",&x);
            ++cnt[x];
        }
        ll ans=0,tmp;
        for(int i=0,j;i<=9;++i){
            if(!cnt[i]) continue;
            for(tmp=1,j=0;j<=9;++j){
                if(i==j||!cnt[j]) continue;
                tmp*=ni[cnt[j]];
            }
            ans+=i*w[n]*(ni[n-cnt[i]]/tmp)*C[n-1][cnt[i]-1];
        }
        printf("%lld\n",ans);
    }
}
