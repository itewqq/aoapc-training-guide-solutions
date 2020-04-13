#include<bits/stdc++.h>
#include<iostream>
#include<stack>
#include<vector>
#include<cstring>
#include<cstdio>
using namespace std;

typedef long long LL;
const int maxn=2e4+5;

int main()
{
    int a,b;
    while((cin>>a>>b)&&b)
    {
        int sa=sqrt(a),sb=sqrt(b);
        int ans=sb-sa+1;
        if(sa*sa<a)ans--;
        if(sb*sb<a)ans=0;
        cout<<ans<<"\n";

    }
    return 0;
}
/*

*/
