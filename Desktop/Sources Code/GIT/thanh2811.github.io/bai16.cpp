/*
Link: 
*/

#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int val(char s){
    if(s=='I') return 1;
    if(s=='V') return 5;
    if(s=='X') return 10;
    if(s=='L') return 50;
    if(s=='C') return 100;
    if(s=='D') return 500;
    if(s=='M') return 1000;
}
void Res(){
    string s;
    cin>>s;
    int ans=val(s[s.length()-1]);
    for(int i=s.length()-2;i>=0;i--){
        if(val(s[i])<val(s[i+1])) ans-=val(s[i]);
        else ans+=val(s[i]);
    }
    cout<<ans<<endl;
}
int main(){
    IOS;
    int test;
    cin>>test;
    while(test--){
        Res();
    }
}