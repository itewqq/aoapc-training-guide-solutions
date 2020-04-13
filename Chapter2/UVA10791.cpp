//#include<bits/stdc++.h>
#include<iostream>
#include<stack>
#include<vector>
#include<cstring>
#include<cstdio>
using namespace std;

typedef long long LL;
const int maxn=2e4+5;

int p[20],n[20];
int div(int A)
{
    int k=0;
    if(A%2==0)
    {
        p[++k]=2;
        n[k]=0;
        while(!(A%2))
        {
            n[k]++;
            A/=2;
        }
    }

    for(LL i=3;i*i<=A;i+=2)
    {
        if(A%i==0)
        {
            p[++k]=i;
            n[k]=0;
            while(!(A%i))
            {
                n[k]++;
                A/=i ;
            }
        }
    }
    if(A!=1)
    {
        p[++k]=A;
        n[k]=1;
    }
    return k;
}

int main()
{
    int t,cs=0,N;
    int flag=0;
    while(~scanf("%d",&N)&&N)
    {
        flag=1;
        cs++;
        if(N==1)
        {
            printf("Case %d: 2\n",cs);
            continue;
        }
        int len=div(N);
        LL a1,a2;
        LL ans=0;//error...
        if(len==1)
            ans=1LL+N;
        else
        {
            for(int i=1;i<=len;i++)
            {
                int tmp=1;
                for(int j=1;j<=n[i];j++)
                    tmp*=p[i];
                ans+=tmp;
            }
        }
        printf("Case %d: %lld\n",cs,ans);
    }
    return 0;
}
