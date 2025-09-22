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
#define fl(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define flr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define flx(x1) for(auto x:x1) ct(x) elc
#define forni for(int i=0;i<n;i++)
#define all(x1) x1.begin(),x1.end()
#define allr(x1) x1.rbegin(),x1.rend()
#define sz(x) x.size()
#define vec(x) vector<x>

void asikM(){
    ll n;
    cin >> n;
    string s;
    cin>>s;
    vec(ll)v(n,-1),in;
    forni{
        if(s[i]=='1'){
            v[i]=i+1;
            in.pb(i);
        }
    }
    // flx(v)
    if(!sz(in)){
        py
        for(int i=n;i>0;i--) cout<<i<<" ";
        elc 
        return;
    }
    ll l=in[0];
    fl(i,0,in[0]) v[i]=l--;
    // flx(v)
    fl(i,1,sz(in)){
        l=in[i];
        fl(j,in[i-1]+1,in[i]) v[j]=l--;
        // flx(v)
    }
    if(in.back()!=n-1){
        l=n;
        fl(i,in.back()+1,n) v[i]=l--;
        // flx(v)
    }
    forni{
        if(s[i]=='0' && v[i]==i+1 && ((i>0 && s[i-1]!='0') || (i<n-1 && s[i+1]!='0'))){
            pn
            return;
        }
    }
    py
    flx(v)
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