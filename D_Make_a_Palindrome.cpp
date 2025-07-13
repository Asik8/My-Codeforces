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
    ll n,k;
    cin >> n>>k;
    vector <ll> v(n),a;
    for (auto& x:v) cin >>x; 
    a=v;
    sort(all(a));
    ll l=a[k-1];
    a.clear();
    forni if(v[i]<=l) a.pb(v[i]);
    ll c=sz(a)-k+1;
    deque<ll>d;
    for(auto x:a)d.pb(x);
    while(sz(d)>1){
        if(d.front()<l && d.back()<l){
            if(d.front() != d.back()){
                pn
                return;
            }
            d.pop_front();
            d.pop_back();
        } else if(d.front()==l && d.back()==l){
            d.pop_front();
            d.pop_back();
        } else{
            if(!c){
                pn
                return;
            } else{
                if(d.back()==l) d.pop_back();
                else d.pop_front();
                c--;
            }
        }
    }
    py
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