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
    int ans=0;
    for(int i=1;i<sqrt(n);i++){
        if(n%i==0){
            if(i%2==0) ans++;
            if((n/i)%2==0) ans++;
        }
    }
    int x=sqrt(n);
    if(x%2==0 && x*x==n) ans++;
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