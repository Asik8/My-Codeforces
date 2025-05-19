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
    set<ll>s;
    deque <ll> v(n);
    for (auto& x:v){
        cin >>x; 
        s.insert(x);
    }
    bool f= false;
    if(!s.count(0)) f= true;
    if(f){
        co(1)
        cout<<1<<" "<<n<<el
        return;
    }
    ll c=0;
    vec(pi) ans;
    if(v.back()==0){
        ans.pb({n-1,n});
        s.clear();
        s.insert(v.back());
        v.pop_back();
        s.insert(v.back());
        v.pop_back();
        while(c<=5000){
            if(!s.count(c)){
                v.pb(c);
                break;
            }
            c++;
        }
    }
    bool f1=false;
    for(auto x:v){
        if(x==0){
            f1=true;
            break;
        }
    }
    if(!f1){
        co(sz(ans)+1)
        for(auto [x,y]:ans) cout<<x<<" "<<y<<el
        cout<<1<<" "<<sz(v)<<el
        return;
    }
    s.clear();
    ll val;
    s.insert(v[0]);
    v.pop_front();
    s.insert(v[0]);
    v.pop_front();
    while(1){
        c=0;
        while(c<=5000){
            if(!s.count(c)){
                val=c;
                break;
            }
            c++;
        }
        ans.pb({1,2});
        if(v.empty()) break;
        if(val !=0){
            bool f= false;
            for(auto x:v){
                if(x==0){
                    f=true;
                    break;
                }
            }
            if(!f){
                // co("Test and next is the c")
                ans.pb({1,sz(v)+1});
                break;
            }
        }
        s.clear();
        s.insert(val);
        s.insert(v[0]);
        v.pop_front();
    }
    co(sz(ans))
    for(auto [x,y]:ans) cout<<x<<" "<<y<<el

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