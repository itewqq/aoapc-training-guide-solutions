#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=3e2+5;

ll C[105][105];

void pre(){
    C[0][0]=1;
    for(int i=1;i<=101;++i){
        C[i][0]=1;
        for(int j=1;j<=i;++j){
            C[i][j]=C[i-1][j]+C[i-1][j-1];
        }
    }
}

int main() {
    //ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    pre();
    int N,K;
    while(scanf("%d%d",&N,&K)&&N){
        cout<<C[N+1][K-1]<<endl;
    }
    return 0;
}
/*


*/
