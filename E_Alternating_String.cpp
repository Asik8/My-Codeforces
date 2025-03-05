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
    if(!(n%2)){
        map<char,ll>m1,m2;
        for(int i=0;i<n;i++){
            if(!(i%2)) m2[s[i]]++;
            if((i%2)) m1[s[i]]++;
        }
        ll c=0,mx=0;
        for(auto [x,y]:m1) mx=max(mx,y);
        c+=((n/2)-mx);
        mx=0;
        for(auto [x,y]:m2) mx=max(mx,y);
        c+=((n/2)-mx);
        co(c)
        return;
    }
    vec(ll) e1(26,0),e2(26,0),o1(26,0),o2(26,0);
    forni{
        ll c=s[i]-'a';
        if(i%2) o2[c]++;
        else e2[c]++;
    }
    ll ans=INFINITY;
    forni{
        ll c=s[i]-'a';
        if(i%2) o2[c]--;
        else e2[c]--;
        ll c1=0,c2=0;
        fl(j,0,26){
            ll c3=o1[j]+e2[j];
            c1=max(c1,c3);
        }
        fl(j,0,26){
            ll c3=e1[j]+o2[j];
            c2=max(c2,c3);
        }
        ans=min(ans,n-c1-c2);
        if(i%2) o1[c]++;
        else e1[c]++;
    }
    co(ans)
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