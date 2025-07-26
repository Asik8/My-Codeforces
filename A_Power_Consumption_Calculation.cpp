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
    ll n,p1,p2,p3,t1,t2,c=0;
    cin >> n>>p1>>p2>>p3>>t1>>t2;
    vector <pi> v(n);
    for (auto& x:v) cin >>x.first>>x.second;
    forni{
        c+=(v[i].second-v[i].first)*p1;
        if(i>0){
            ll rem=v[i].first-v[i-1].second;
            if(rem>=t1){
                c+=(t1*p1);
                rem-=t1;
            } else{
                c+=(rem*p1);
                rem=0;
            }
            if(rem>=t2){
                c+=(t2*p2);
                rem-=t2;
            } else{
                c+=(rem*p2);
                rem=0;
            }
            c+=(rem*p3);
        }
    }
    co(c)
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