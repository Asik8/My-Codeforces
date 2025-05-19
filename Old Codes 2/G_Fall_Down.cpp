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
#define sz(x) x.size()
#define vec vector<ll>

// . is empty cell
// * denote stone
// o for obstacle

void asikM(){
    ll n,m;
    cin>>n>>m;
    char a[n][m];
    forni{
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    } 
    f(j,0,m){
        ll l=n-1;
        fr(i,n-1,0){
            if(a[i][j]=='o') l=i-1;
            else if(a[i][j]=='*'){
                swap(a[i][j],a[l][j]);
                l--;
            }
        }
    }
    forni{
        f(j,0,m){
            cout<<a[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    asikM();      
    return 0;
}