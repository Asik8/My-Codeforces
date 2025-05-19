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

void asikM(){
    ll n;
    cin >> n;
    vector <ll> v;
    string s;
    cin>>s;
    reverse(s.begin(),s.end());
    ll c=0;
    forni{
        if(s[i]=='0'){
            c++;
            v.pb(i-v.size());
        }
    }
    f(i,1,v.size()) v[i]=v[i-1]+v[i];
    ll l=0;
    forni{
        if(i<v.size()) cout<<v[i]<<" ";
        else cout<<"-1 ";
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