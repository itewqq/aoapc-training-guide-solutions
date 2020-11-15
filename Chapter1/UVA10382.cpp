#include<bits/stdc++.h>
using namespace std;

// #define int long long
const int maxn=1e4+5;
int n,l,w,top;
int p[maxn],r[maxn];
pair<double,double> ps[maxn];

signed main(){
    // freopen("in","r",stdin);
    // freopen("out","w",stdout);
    while(scanf("%d%d%d",&n,&l,&w)==3){
        top=1;
        double hd=1e9+7.0,tl=-1e9+7;
        for(int i=1;i<=n;++i){
            scanf("%d%d",&p[i],&r[i]);
            if(r[i]*2<=w) continue;
            ps[top].first=1.0*p[i]-sqrt(1.0*r[i]*r[i]-0.25*w*w);
            ps[top].second=1.0*p[i]+sqrt(1.0*r[i]*r[i]-0.25*w*w);
            hd=min(hd,ps[top].first);
            tl=max(tl,ps[top].second);
            ++top;//error2 for the continue
        }
        sort(ps+1,ps+1+top-1);//error3
        if(0<hd||tl<l){
            puts("-1");
            continue;
        }
        double cur=-1e9+7,nxt=0.0;
        int ans=0;
        for(int i=1;i<top;++i){
            if(ps[i].second<0.0) continue;
            if(ps[i].first>cur){
                if(ps[i].first>nxt){
                    ans=-1;
                    break;
                }
                cur=nxt;
                ans++;
            }
            nxt=max(nxt,ps[i].second);
            if(nxt>=l) break;//error1
        }
        printf("%d\n",ans);
    }
}
