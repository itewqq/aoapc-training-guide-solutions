#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int maxn = 1e4+5;

double up,down,tot,tmp;

int main(){
    freopen("g.in","r",stdin);
    int m,p,a,b;
    while(scanf("%d%d%d%d",&m,&p,&a,&b)==4){
        up=sqrt(1.0*a),down=-1.0/sqrt(1.0*a),tot=b*up;
        double ans1=0.0,ans2=0.0;
        for(int i=m;i>=1;--i){
            ans1+=pow(min(up,tot-(i-1)*down),p);
            tot-=min(up,tot-(i-1)*down);
        }
        tot=b*up;
        for(int i=m;i>=1;--i){
            ans2+=pow(max(down,tot-(i-1)*up),p);
            tot-=max(down,tot-(i-1)*up);
        }
        printf("%d\n",(int)round(max(ans1,ans2)));
    }
}
