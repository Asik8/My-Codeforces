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
const int N=1e3+5;
string a[N];
void asikM(){
    ll n;
    cin >> n;
    forni cin>>a[i];
    vec p(n);
    for(int i=1;i<=n;i++){
        ll c=0;
        for(int j=0;j<i-1;j++){
            c+=(a[i-1][j]-'0');
        }
        for(int j=i;j<n;j++){
            c+=!(a[i-1][j]-'0');
        }
        p[c]=i;
    }
    for(auto x:p) cout<<x<<" ";
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