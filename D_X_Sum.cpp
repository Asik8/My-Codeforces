#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define f(x1,x2,x3) for(int x1=x2;x1<x3;x1++)

bool check(ll n,ll m,ll i,ll j){
    return (i>=0 && i<n && j>=0 && j<m);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--){
        ll n,m;
        cin>>n>>m;
        ll a[n][m];
        f(i,0,n){
            f(j,0,m){
                cin>>a[i][j];
            }
        }   
        ll mx=INT_MIN,c=0;
        f(i,0,n){
            f(j,0,m){
                c=0;
                ll x=i,y=j;
                while(true){
                    x--,y--;
                    if(check(n,m,x,y)){
                        c+=a[x][y];
                    }
                    else break;
                }
                x=i,y=j;
                while(true){
                    x++,y++;
                    if(check(n,m,x,y)){
                        c+=a[x][y];
                    }
                    else break;
                }
                x=i,y=j;
                while(true){
                    x++,y--;
                    if(check(n,m,x,y)){
                        c+=a[x][y];
                    }
                    else break;
                }
                x=i,y=j;
                while(true){
                    x--,y++;
                    if(check(n,m,x,y)){
                        c+=a[x][y];
                    }
                    else break;
                }
                c+=a[i][j];
                if(c>mx)mx=c;
            }
        }    
        cout<<mx<<endl;
    }
    return 0;
}