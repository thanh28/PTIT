/*
Link: 
*/

#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define yes cout<<"YES"
#define no cout<<"NO"
int cp(ll a){
    ll b = sqrt(a);
    if(b*b==a) return 1;
    return 0;
}
void Res(){
    ll a,b,c,d,e,f;
    ll ans=0;
    cin>>a>>b>>c>>d>>e>>f;
    ans=a*b+d*c+e*f;
    if(cp(ans)==0){ no;return;}
    if(a>b) swap(a,b);
	if(c>d) swap(c,d);
	if(e>f) swap(e,f);
    ll y = sqrt(ans);
    if(b==d && d==f && f==y) yes;
    else {
       if(d==y) {swap(a,c); swap(b,d);}
			if(f==y) {swap(a,e); swap(b,f);}
			if(b==y)
			{
				a=y-a;
				if((c==a && e==a) || (d==a && e==a)|| (c==a && f==a) || (d==a && f==a))  yes;
				else no;
			}		
			else no; 
    }
}
int main(){
    IOS;
    Res();
}