#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=3e2+5;

ll C[205][205];

void pre(){
    C[0][0]=1;
    for(int i=1;i<=201;++i){
        C[i][0]=1;
        for(int j=1;j<=i;++j){
            C[i][j]=(C[i-1][j]+C[i-1][j-1])%(1000000);
        }
    }
}

int main() {
    //ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("1.out","w",stdout);
    pre();
    int N,K;
    while(scanf("%d%d",&N,&K)==2&&N+K>0){
        cout<<C[N+K-1][K-1]<<endl;
    }
    return 0;
}
