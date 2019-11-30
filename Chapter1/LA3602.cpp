#include<bits/stdc++.h>

using namespace std;

char sg[5]="ACGT";
char str[55][1005],ans[1005];
int cnt[1005][4];

int main(){
    int T,n,m,res=0;
    scanf("%d",&T);
    while(T--){
        scanf("%d%d",&n,&m);
        for(int i=0;i<m;++i) 
            memset(cnt[i],0,sizeof(cnt[0]));
        for(int i=1;i<=n;++i){
            scanf(" %s",str[i]);
            for(int j=0;j<m;++j){
                if(str[i][j]=='A'){
                    cnt[j][0]++;
                }
                else if(str[i][j]=='C'){
                    cnt[j][1]++;
                }
                else if(str[i][j]=='G'){
                    cnt[j][2]++;
                }
                else {
                    cnt[j][3]++;
                }
            }
        }
        res=0;
        for(int i=0;i<m;++i){
            int mx=0,pos=0;
            for(int k=0;k<4;++k){
                if(cnt[i][k]>mx){mx=cnt[i][k],pos=k;}
            }
            res+=n-mx;
            ans[i]=sg[pos];
        }
        for(int i=0;i<m;++i){
            printf("%c",ans[i]);
        }
        puts("");
        printf("%d\n",res);
    }
    return 0;
}
/*

*/
