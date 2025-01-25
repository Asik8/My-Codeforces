#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pbs insert
#define py cout<<"YES\n";
#define pys cout<<"Yes\n";
#define pn cout<<"NO\n";
#define pns cout<<"No\n";
#define co(x1) cout<<x1<<"\n";
#define ct(x1) cout<<x1<<" ";
#define elc cout<<"\n";
#define el "\n";
#define f(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define fr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define forni for(int i=0;i<n;i++)
#define all(x1) x1.begin(),x1.end()
#define allr(x1) x1.rbegin(),x1.rend()
#define sz(x) x.size()
#define vec(x) vector<x>

void asikM(){
    ll n,m;
    cin >> n>>m;
    string st;
    cin>>st;
    vector<vector<ll>> a(n,vector<ll>(m));
    f(i,0,n){
        f(j,0,m){
            cin>>a[i][j];
        }
    }
    vec(ll) row(n),col(m);
    f(i,0,n){
        ll s=0;
        f(j,0,m) s+=a[i][j];
        row[i]=s;
    }
    f(j,0,m){
        ll s=0;
        f(i,0,n) s+=a[i][j];
        col[j]=s;
    }
    ll l=0,r=0,in=0;
    while(in<n+m-1){
        if(st[in]=='D'){
            a[l][r]=-row[l];
            row[l]+=a[l][r];
            col[r]+=a[l][r];
            l++;
        }
        else if(st[in]=='R'){
            a[l][r]=-col[r];
            row[l]+=a[l][r];
            col[r]+=a[l][r];
            r++;
        }
        in++;
    }
    ll c=0;
    f(j,0,m) c+=a[n-1][j];
    a[n-1][m-1]=-c;
    f(i,0,n){
        f(j,0,m){
            cout<<a[i][j]<<" ";
        }
        elc
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    cin >> t;
    while (t--)
    asikM();      
    return 0;
}