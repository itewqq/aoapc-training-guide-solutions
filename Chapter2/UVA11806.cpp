#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1000007;

ll C[405][405];
void init(){
	C[0][0]=1;
	for(int i=1;i<=400;++i){
		C[i][0]=1;
		for(int j=1;j<=i;++j){
			C[i][j]=(C[i-1][j-1]+C[i-1][j])%mod;
		}
	}
}

ll c(ll n,ll m){
	if(n<=0||n<m) return 0;
	return C[n][m];
}

int main(){
	init();
	int T,cs=0;
	scanf("%d",&T);
	while(T--){
		cs++;
		printf("Case %d: ",cs);
		int m,n,k;
		scanf("%d%d%d",&m,&n,&k);
		if(k>m*n||k<2){
			printf("0\n");
			continue;
		}
		ll ao=c(m*n,k);
		ll a1=(2*c((n-1)*m,k)+2*c(n*(m-1),k))%mod;
		ll a2=(c((n-2)*m,k)+c(n*(m-2),k)+4*c((n-1)*(m-1),k))%mod;
		ll a3=(2*c((n-1)*(m-2),k)+2*c((n-2)*(m-1),k))%mod;
		ll a4=c((n-2)*(m-2),k);
		printf("%lld\n",((ao-a1+a2-a3+a4)%mod+mod)%mod);
	}
}

/*
Easy Inclusion-Exclusion Principle
*/
