#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define co(x1) cout<<x1<<"\n";
#define f(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define fr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define forni for(int i=0;i<n;i++)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m,c=0;
    cin>>n>>m;
    while(n!=m){
        if(m>n){
            if(!(m%2)){
                m/=2;
                c++;
            }
            else{
                m++;
                c++;
            }
        }
        else{
            m++;
            c++;
        }
    }
    co(c)
    return 0;
}