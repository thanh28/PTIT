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
    int a[1000],b[1000];
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++) cin>>b[i];
    sort(a+1,a+n+1);
    sort(b+1,b+n+1);
    for(int i=1;i<=n;i++) if(a[i]>b[i]){cout<<"NO";return;}
    cout<<"YES";

}
int main(){
    IOS;
    // int test;
    // cin>>test;
    // while(test--){
        Res();
    // }
}