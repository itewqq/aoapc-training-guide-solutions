#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=3e2+5;

int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s,t;
    int sl,tl,ps,pt;
    while(cin>>s>>t){
        sl=s.length(),tl=t.length();
        for(ps=pt=0;ps<sl&&pt<tl;++pt){
            ps+=(s[ps]==t[pt]);
        }
        cout<<(ps<sl?"No":"Yes")<<endl;
    }
    return 0;
}
