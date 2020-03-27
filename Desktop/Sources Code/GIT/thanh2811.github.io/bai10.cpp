/*
Link: 
*/

#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
string chuan(string s){
    if(s[0]>='a'&&s[0]<='z') s[0]-=32;
    for(int i=1;i<s.length();i++) if(s[i]>='A'&&s[i]<='Z') s[i]+=32;
    return s;
}
void Res(){
    // cin.ignore();
    string s;
    getline(cin,s);
    string res="";
    int i=0;
    while(s[i]!='\0'){
        if(s[i]!=' '){
            string ans="";
            while(s[i]!=' '&&s[i]!='\0'){
                ans+=s[i];i++;
            }
            res+=chuan(ans);
            res+=' ';
        }
        else i++;
    }
    for(int j=0;j<res.length()-1;j++) cout<<res[j];
    cout<<endl;
}
int main(){
    // IOS;
    int test;
    cin>>test;
    cin.ignore();
    while(test--){
        Res();
    }
}