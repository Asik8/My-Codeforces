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
#define f(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define fr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
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
    map<ll,ll>m;
    forni{
        ll x=(v[i]%10);
        m[x]++;
    }
    // for(auto [x,y]:m) cout<<x<<" "<<y<<el;
    for(int i=0;i<=9;i++){
        for(int j=0;j<=9;j++){
            for(int k=0;k<=9;k++){
                ll x=(i+j+k)%10;
                if(x==3){
                    // cout<<i<<" "<<j<<" "<<k<<el;
                    if(i==j && j==k && m[i]>2){
                        // co("Hitting:-1")
                        // cout<<i<<" "<<j<<" "<<k<<el;
                        py
                        return;
                    }
                    else if(i==j && j!=k && m[i]>1 && m[k]>0){
                        // co("Hitting:-2")
                        // cout<<i<<" "<<j<<" "<<k<<el;
                        py
                        return;
                    }
                    else if(i==k && k!=j && m[i]>1 && m[j]>0){
                        // co("Hitting:-3")
                        // cout<<i<<" "<<j<<" "<<k<<el;
                        py
                        return;
                    }
                    else if(j==k && k!=i && m[j]>1 && m[i]>0){
                        // co("Hitting:-4")
                        // cout<<i<<" "<<j<<" "<<k<<el;
                        py
                        return;
                    }
                    else if(i!=j && j!=k && i!=k && m[k]>0 && m[j]>0 && m[i]>0){
                        // co("Hitting:-5")
                        // cout<<i<<" "<<j<<" "<<k<<el;
                        py
                        return;
                    }
                }
            }
        }
    }
    pn
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