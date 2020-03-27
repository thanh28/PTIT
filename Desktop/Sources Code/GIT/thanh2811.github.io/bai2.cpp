/*
Link: 
*/

#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

void Res(){
    int n,t,x;
    cin>>n;
    x=n%10;
    while(n){
        t=n%10;n/=10;
    }
    if(t==x) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main(){
    // IOS;
    int test;
    cin>>test;
    while(test--){
        Res();
    }
}