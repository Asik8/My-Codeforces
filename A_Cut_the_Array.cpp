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
    vector <ll> v(n);
    for (auto& x:v) cin >>x; 
    bool f=false;
    set<ll>s;
    ll c1=0;
    fl(i,0,n-2){
        ll c3=0,c2=0;
        c1+=v[i];
        ll l=i+1;
        c2+=v[l];
        fl(j,l+1,n) c3+=v[j];
        // cout<<c1<<" "<<c2<<" "<<c3<<el
        s.clear();
        s.insert(c1%3);
        s.insert(c2%3);
        s.insert(c3%3);
        if(sz(s)==3 || sz(s)==1){
            cout<<i+1<<" "<<l+1<<el
            return;
        }
        l++;
        while(1){
            if(l>=n-1) break;
            c2+=v[l];
            c3-=v[l];
            s.clear();
            s.insert(c1%3);
            s.insert(c2%3);
            s.insert(c3%3);
            if(sz(s)==3 || sz(s)==1){
                cout<<i+1<<" "<<l+1<<el
                return;
            }
            // cout<<c1<<" "<<c2<<" "<<c3<<el
            l++;
        }
    }
    cout<<0<<" "<<0<<el    
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