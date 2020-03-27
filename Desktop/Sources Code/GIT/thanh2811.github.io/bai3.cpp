/*
Link: 
*/

#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

void Res(){
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n/2;i++){
        if(a[i]!=a[n-i+1]){cout<<"NO"<<endl;return;}
    }
    cout<<"YES"<<endl;
}
int main(){
    // IOS;
    int test;
    cin>>test;
    int tt=1;
    while(tt<=test){
        Res();
        // cout<<"Test "<<tt<<": ";
        tt++;
    }
}