#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int maxn = 5e2+5;

int a[maxn],n;
void qs(int l,int r,int a[]){
    if(l>=r) return;
    int pl=l,pr=r,x=a[l];
    while(pl<pr){
        while(pl<pr&&x<=a[pr]) --pr;
        if(pl<pr) a[pl]=a[pr];
        while(pl<pr&&a[pl]<x) ++pl;
        if(pl<pr) a[pr]=a[pl];
    }
    a[pl]=x;


    qs(l,pl-1,a);
    qs(pl+1,r,a);
}



int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t,len,sum,sum3,cs=0;
    cin>>t;
    string s;
    while(t--){
        ++cs;
        cout<<"Case "<<cs<<": ";
        cin>>s;
        len=s.length();
        sum=sum3=0;
        for(int i=0;i<len;++i){
            sum+=(s[i]-'0');
            sum3+=((s[i]-'0')%3==0);
        }
        if(sum%3==0){
            if(sum3&1){
                cout<<'S';
            }
            else{
                cout<<'T';
            }
        }
        else{
            int flag=0;
            for(int i=0;i<len;++i){
                if((sum-(s[i]-'0'))%3==0){
                    if(sum3&1){
                        cout<<'T';
                    }
                    else{
                        cout<<'S';
                    }
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                cout<<'T';
            }
        }
        cout<<"\n";
    }
}

