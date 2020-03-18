#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=3e2+5;

int dp[maxn][maxn];

int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n=300,m=300;
    dp[1][2]=dp[2][1]=0;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=m;++j){
            for(int ii=1;ii<=i-1;++ii){
                dp[i][j]=max(dp[i][j],1+dp[ii][j]+dp[i-ii][j]);
            }
            for(int jj=1;jj<=j-1;++jj){
                dp[i][j]=max(dp[i][j],1+dp[i][jj]+dp[i][j-jj]);
            }
        }
    }
    while(cin>>n>>m){
        cout<<dp[n][m]<<endl;
    }
    return 0;
}
