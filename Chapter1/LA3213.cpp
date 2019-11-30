#include<bits/stdc++.h>

using namespace std;

int mp1[30],mp2[30],cnt1[105],cnt2[105];
char str1[105],str2[106];

int main(){
    while(~scanf(" %s %s",str1,str2)){
        int n=strlen(str1),flag=0;
        for(int i=0;i<26;++i) mp1[i]=mp2[i]=0;
        for(int i=0;i<=100;++i) cnt1[i]=cnt2[i]=0;
        for(int i=0;i<n;++i){
            ++mp1[str1[i]-'A'];
            ++mp2[str2[i]-'A'];
        }
        for(int i=0;i<26;++i){
            ++cnt1[mp1[i]];
            ++cnt2[mp2[i]];
        }
        for(int i=0;i<=100;++i) if(cnt1[i]!=cnt2[i]){flag=1;break;}
        if(flag) puts("NO");
        else puts("YES");
    }
    return 0;
}

