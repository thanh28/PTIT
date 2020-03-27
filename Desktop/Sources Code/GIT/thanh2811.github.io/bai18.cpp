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
    int ans=0;
    int n=s.length();
    vector<int> a(53,0);
    for(int i=0;i<n;i++){
        if(a[i]==0){
            a[i]=1;
            for(int j=i+1;j<n;j++){
                if(a[j]==1) ans++;
                if(s[i]==s[j]) {a[j]=1;break;}
            }
        }
    }
    cout<<ans;
}
int main(){
    // IOS;
    Res();
}