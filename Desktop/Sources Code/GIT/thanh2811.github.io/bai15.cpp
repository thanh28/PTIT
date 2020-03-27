/*
Link: 
*/

#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

void Res(){
    int n,k;
    cin>>n;
    int a[n+1],b[n+1];
    map<int,int> mp;
    for(int i=1;i<=n;i++){
        cin>>a[i];mp[a[i]]=0;
    }
    for(int i=1;i<=n;i++){
        mp[a[i]]++;
    }
    for(int i=1;i<=n;i++){
        if(mp[a[i]]>1) {cout<<a[i]<<endl;return;}
    }
    // map<int,int>::iterator it;
    // for(it=mp.begin();it!=mp.end();it++){
    //     if(it->second>1){
    //         cout<<it->first<<endl;return;
    //     }
    // }
    cout<<"NO"<<endl;
}
int main(){
    IOS;
    int test;
    cin>>test;
    while(test--){
        Res();
    }
}