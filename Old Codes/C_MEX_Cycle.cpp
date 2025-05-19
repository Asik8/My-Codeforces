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
    ll n,x,y;
    cin>>n>>x>>y;
    vector <ll> v(n);
    forni v[i]=i+1;
    auto ch_mex=[&](set<ll> s){
        ll c=0;
        while(s.count(c)) c++;
        return c;
    };
    forni{
        set<ll>s;
        if(i==x-1) s.insert(v[y-1]);
        else if(i==y-1) s.insert(v[x-1]);
        if(i==0){
            s.insert(v[n-1]);
            s.insert(v[i+1]);
        }
        else if(i==n-1){
            s.insert(v[i-1]);
            s.insert(v[0]);
        }
        else{
            s.insert(v[i-1]);
            s.insert(v[i+1]);
        }
        v[i]=ch_mex(s);
    }
    for(auto q:v) cout<<q<<" ";
    cout<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        asikM();      
    }
    return 0;
}