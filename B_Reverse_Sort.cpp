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
    ll n,o=-1,z=0,oc=0,zc=0;
    cin >> n;
    string s;
    cin>>s;
    if(n==1){
        co(0)
        return;
    }
    forni{
        if(s[i]=='0'){
            z=i;
            zc++;
        } else{
            if(o==-1) o=i;
            oc++;
        }
    }
    if(z<o || zc==0 || oc==0){
        co(0)
        return;
    }
    oc=0,zc=0;
    co(1);
    forni if(s[i]=='1') oc++;
    ll in=n-oc;
    z=0,o=0;
    vec(ll)ans;
    fl(i,0,in){
        if(s[i]=='1'){
            ans.pb(i+1);
            o++;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(s[i]=='0'){
            ans.pb(i+1);
            z++;
            if(z==o) break;
        }
    }
    ct(sz(ans))
    sort(all(ans));
    flx(ans)
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