/*
Link: 
*/

#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

void Res(int tt){
    int n,m,p;
    cin>>n>>m>>p;
    int a[n+1],b[m+1];
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=m;i++){ cin>>b[i];}
    cout<<"Test "<<tt<<":"<<endl;
    for(int i=1;i<=p;i++) cout<<a[i]<<" ";
    for(int i=1;i<=m;i++){cout<<b[i]<<" ";}
    for(int i=p+1;i<=n;i++) cout<<a[i]<<" ";
    cout<<endl;
}
int main(){
    int test;
    cin>>test;
    int tt=1;
    while(tt<=test){
        Res(tt);
        tt++;
    }
}