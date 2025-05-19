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
    vector <ll> even,odd;
    forni{
        ll x;
        cin>>x;
        if(x%2) odd.pb(x);
        else even.pb(x);
    }
    ll i=0;
    sort(all(even));
    sort(all(odd));
    if(sz(even)>=sz(odd)){
        while(1){
            if(!(i%2) && sz(even)>0) even.pop_back();
            else{
                if(sz(odd)>0) odd.pop_back();
                else break;
            }
            i++;
        }
    }
    else{
        while(1){
            if(!(i%2) && sz(odd)>0) odd.pop_back();
            else {
                if(sz(even)>0) even.pop_back();
                else break;
            }
            i++;
        }
    }
    ll c1=accumulate(all(even),0LL),c2=accumulate(all(odd),0LL);
    co(c1+c2)
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    // cin >> t;
    while (t--)
    asikM();      
    return 0;
}