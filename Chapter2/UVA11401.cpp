#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll f(ll n){
	return (2*n*(n+1)*(n+2)-15*(n+1)*(n+1))/24+3*(n+1)/2-1;
}

int main(){
	ll n;
	while(scanf("%lld",&n)!=-1&&n>=3){
		if(n&1LL){
			printf("%lld\n",f(n));
		}else{
			printf("%lld\n",f(n-1)+n*n/4-n+1);
		}
	}
}

/*
Sequence sum
*/
