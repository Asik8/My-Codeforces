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
    ll n,m;
    cin >> n>>m;
    vector <string> v(n);
    for (auto& x:v) cin >>x; 
    // forni co(v[i])
    auto ch=[&](ll i,ll j){
        return i>=0 && i<n && j>=0 && j<m;
    };
    fl(i,0,n){
        fl(j,0,m){
            if(v[i][j] !='0'){
                bool f1=true,f2=true;
                fl(l,1,m){
                    if(ch(i,j-l) && v[i][j-l]=='0'){
                        f1=false;
                        break;
                    }
                }
                fl(l,1,n){
                    if(ch(i-l,j) && v[i-l][j]=='0'){
                        f2=false;
                        break;
                    } 
                }
                if(!f1 && !f2){
                    // cout<<i<<" "<<j<<" "<<v[i][j]<<el
                    pn
                    return;
                }
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