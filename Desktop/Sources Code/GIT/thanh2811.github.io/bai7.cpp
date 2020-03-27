/*
Link: 
*/

#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
int n,m,a[1000][1000],b[1000][1000];
void Res(){
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            b[i][j]=a[j][i];
            // cout<<b[i][j]<<" ";
        }
        // cout<<endl;
    }
    ll c[100][100];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            ll sum=0;
            for(int x=1;x<=m;x++){
                sum+=a[i][x]*b[x][j];
            }
            c[i][j]=sum;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++) cout<<c[i][j]<<" ";
        cout<<endl;
    }
}
int main(){
    int test;
    cin>>test;
    int tt=1;
    while(tt<=test){
        cin>>n>>m;
        for(int i=1;i<=n;i++){ for(int j=1;j<=m;j++) cin>>a[i][j];}
        cout<<"Test "<<tt<<":"<<endl;
        Res();
        tt++;
    }
}