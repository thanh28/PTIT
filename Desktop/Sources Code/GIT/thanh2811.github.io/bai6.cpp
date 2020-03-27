/*
Link: 
*/

#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
int n;
void Res(){
    int a[25][25],k=n;
    int s=n*n,d=1,c=1;
    while(s!=0){
        for(int i=c;i<=n;i++){
            a[d][i]=s;
            s--;
        }
        for(int i=d+1;i<=n;i++){
            a[i][n]=s;
            s--;
        }
        for(int i=n-1;i>=c;i--){ a[n][i]=s;s--;}
        for(int i=n-1;i>=c+1;i--) {
            a[i][c]=s;s--;
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