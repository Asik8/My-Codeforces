#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pbs insert
#define pi pair<ll,ll>
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
    ll n;
    cin>>n;
    string s;
    cin>>s;
    vector <ll> v;
    ll c=0;
    forni{
        if(s[i]=='.') c++;
        else if(s[i]=='#' && c>0){
            v.pb(c);
            c=0;
        }
    }
    if(c>0) v.pb(c);
    if(v.empty()){
        co(0)
        return;
    }
    sort(allr(v));
    if(v[0]>=3){
        co(2)
        return;
    }
    else co(accumulate(all(v),0LL))
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