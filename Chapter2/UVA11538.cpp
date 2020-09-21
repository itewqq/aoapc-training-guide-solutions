//Easy math
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll n,m;
	while(scanf("%lld%lld",&n,&m)!=-1&&n){
		if(n>m) swap(n,m);
		ll ans=n*m*(m-1)+m*n*(n-1)+2*((n-1)*n*(2*n-1)/3-(n-1)*n+n*(n-1)*(m-n+1));
		printf("%lld\n",ans); 
	}
}
