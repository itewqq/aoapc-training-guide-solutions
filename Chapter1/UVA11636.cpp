//https://vjudge.net/problem/UVA-11636
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int n,ans,cs=0;
    while(scanf("%d",&n)&&n>=0){
        ans=0;
        cs++;
        while(n>1){
            ans++;
            n-=n/2;
        }
        printf("Case %d: %d\n",cs,ans);
    }
    return 0;
}
