//#include <bits/stdc++.h>
#include<cstdio>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int maxn = 1e4+5;

double up,down,tot,tmp;

int main(){
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        if(n&1){
            printf("%d\n",+n/2*(n/2));
        }
        else{
            printf("%d\n",n/2*(n/2-1));
        }
    }
}

