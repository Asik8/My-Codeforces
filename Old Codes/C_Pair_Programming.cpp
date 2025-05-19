#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pbs insert
#define py cout<<"YES\n";
#define pys cout<<"Yes\n";
#define pn cout<<"NO\n";
#define pns cout<<"No\n";
#define co(x1) cout<<x1<<"\n";
#define ct(x1) cout<<x1<<" ";
#define elc cout<<"\n";
#define el "\n";
#define f(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define fr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define forni for(int i=0;i<n;i++)
#define all(x1) x1.begin(),x1.end()
#define allr(x1) x1.rbegin(),x1.rend()
#define sz(x) x.size()
#define vec(x) vector<x>

void asikM(){
    ll k,n,m;
    cin >>k>>n>>m;
    vector <ll> a(n),b(m);
    for (auto& x:a) cin >>x; 
    for (auto& x:b) cin >>x; 
    vec(ll) ans;
    ll i=0,j=0;
    while(i<n || j<m){
        if(i<n && j<m){
            if(a[i]==0){
                ans.pb(a[i]);
                i++;
                k++;
            }
            else if(b[j]==0){
                ans.pb(b[j]);
                j++;
                k++;
            }
            else{
                if(a[i]<=b[j] && a[i]<=k){
                    ans.pb(a[i]);
                    i++;
                }
                else if(a[i]>b[j] && b[j]<=k){
                    ans.pb(b[j]);
                    j++;
                }
                else{
                    co(-1)
                    return;
                }
            }
        }
        else if(i<n){
             if(a[i]==0){
                ans.pb(a[i]);
                i++;
                k++;
            }
            else{
                if(a[i]<=k){
                    ans.pb(a[i]);
                    i++;
                }
                else{
                    co(-1)
                    return;
                }
            }
        }
        else if(j<m){
             if(b[j]==0){
                ans.pb(b[j]);
                j++;
                k++;
            }
            else{
                if(b[j]<=k){
                    ans.pb(b[j]);
                    j++;
                }
                else{
                    co(-1)
                    return;
                }
            }
        }
    }
    for(auto x:ans) ct(x)
    elc
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