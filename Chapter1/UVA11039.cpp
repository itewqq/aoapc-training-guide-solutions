#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int maxn=5e5+5;

int a[maxn];

bool cmp(int a,int b){
    return abs(a)<abs(b);
}

int main(){
    int n,T;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&n);
        for(int i=1;i<=n;++i){
            scanf("%d",&a[i]);
        }
        sort(a+1,a+1+n,cmp);
        int ans=1,pre=0,tmp=0;
        for(int k=0;k<=1;++k){
            for(int i=1;i<=n;++i){
                if(pre==0){
                    if(k){
                        if(a[i]>0) ++tmp,pre=1;
                        else continue;
                    }
                    else{
                        if(a[i]<0) ++tmp,pre=-1;
                        else continue;
                    }
                }
                else{
                    if(pre<0){
                        if(a[i]>0) ++tmp,pre=1;
                        else continue;
                    }
                    else{
                        if(a[i]<0) ++tmp,pre=-1;
                        else continue;
                    }
                }
            }
            ans=max(ans,tmp);tmp=pre=0;
        }
        printf("%d\n",ans);
    }
    return 0;
}
