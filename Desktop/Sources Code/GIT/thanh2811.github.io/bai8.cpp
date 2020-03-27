/*
Link: 
*/

#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
int n;
void Res(){
    ll f[100];
    f[1]=1;f[2]=1;
    for(int i=3;i<=n*n;i++){
        f[i]=f[i-1]+f[i-2];
    }
    ll s=1,a[100][100],c=1,d=1,k=n;
    while(s<=k*k){
        for(int i=c;i<=n;i++){
            a[d][i]=f[s];
            s++;
        }
        for(int i=d+1;i<=n;i++){
            a[i][n]=f[s];
            s++;
        }
        for(int i=n-1;i>=c;i--){ a[n][i]=f[s];s++;}
        for(int i=n-1;i>=c+1;i--) {
            a[i][c]=f[s];s++;
        }
        d++;c++;n--;
    }
    for(int i=1;i<=k;i++){
        for(int j=1;j<=k;j++) cout<<a[i][j]<<" ";
        cout<<endl;
    }
}
int main(){
    int test;
    cin>>test;
    int tt=1;
    while(tt<=test){
        cin>>n;
        cout<<"Test "<<tt<<":"<<endl;
        Res();
        tt++;
    }
}