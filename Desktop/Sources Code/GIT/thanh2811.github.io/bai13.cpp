/*
Link: 
*/

#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
ofstream off("out.txt");
int isPrime(int t){
    while(t){
        int n=t%10;
        if(n!=2 && n!=3 && n!=7 && n!=5) return 0;
        t/=10;
    }
    return 1;
}
void Res(){
    int n=0,x,a[50003];
    map<int,int> mp;
    while(cin>>x){
        if(isPrime(x)) {
            mp[x]++;n++;
            a[n]=x;
        }
        // if(c=='\n') break;
    }
    for(int i=1;i<=n;i++){
        if(mp[a[i]]>0) cout<<a[i]<<" "<<mp[a[i]]<<endl;
        mp[a[i]]=0;
    }
}
int main(){
    IOS;
    Res();
}