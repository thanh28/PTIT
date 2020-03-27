/*
Link: 
2 8
2 5 2 8 5 6 8 8
8 8 8 5 5 2 2 6 
*/

#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

bool cmp(pair<int,int> a,pair<int,int> b){
    return a.first>b.first;
}
void Res(){
    int n;
    cin>>n;
    int a[n+1];
    map<int,int> m;
    for(int i=1;i<=n;i++){
        cin>>a[i];m[a[i]]=0;
    }
    for(int i=1;i<=n;i++){
        m[a[i]]++;
    }
    vector<pair<int,int> > v;
    for(int i=1;i<=n;i++){
        if(m[a[i]]>0){
            v.push_back(make_pair(m[a[i]],a[i]));
            m[a[i]]=0;
        }
    }
    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<v.size();i++){
        for(int j=1;j<=v[i].first;j++) cout<<v[i].second<<" ";
    }
    cout<<endl;
}
int main(){
    IOS;
    int test;
    cin>>test;
    while(test--){
        Res();
    }
}