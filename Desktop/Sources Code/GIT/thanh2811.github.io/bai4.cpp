/*
Link: 
*/

#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
int n;
void Res(){
    for(int i=2;i<=sqrt(n);i++){
        int kt=0,dem=0;
        while(n%i==0){
            n/=i;
            dem++;
            kt=1;
        }
        if(kt==1)cout<<i<<"("<<dem<<") ";
    }
    if(n!=1) cout<<n<<"(1)";
    cout<<endl;
}
// if(kt==1) cout<<i<<"("<<dem<<") ";
int main(){
    // IOS;
    int test;
    cin>>test;
    int tt=1;
    while(tt<=test){
        cin>>n;
        cout<<"Test "<<tt<<": ";
        Res();
        tt++;
    }
}