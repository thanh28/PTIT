/*
Link: 
*/

#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

void Res(){
    string s;
    cin>>s;
    int x=0,y=0,n=s.length();
    for(int i=0;i<s.length()-1;i++){
        if(s[i]<=s[i+1]) x++;
        if(s[i]>=s[i+1]) y++;
    }
    if(x==n-1 || y==n-1) cout<<"YES";
    else cout<<"NO";
    cout<<"\n";
}
int main(){
    IOS;
    int test;
    cin>>test;
    while(test--){
        Res();
    }
}