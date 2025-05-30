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
    vector <ll> a(n);
    for (auto& x:a) cin >>x; 
    vector<pi>b(n);
    for(auto &x:b) cin>>x.first>>x.second;
    ll h=0;
    bool f=true;
    forni{
        cout<<i<<" "<<"Initail a[i]: "<<a[i]<<el
        if(a[i]==0){
            if((h<b[i].first || h>b[i].second)){
                co("Hit-1")
                f=false;
                break;
            }
        } else if(a[i]==1){
            co("Hit-2")
            if(h+1<b[i].first || h+1>b[i].second){
                f=false;
                break;
            }
            else h++;
        } else{
            if(i!=n-1){
                co("Hit-3")
                cout<<"value of h: "<<h<<el
                if(h>=b[i].first && h<=b[i].second){
                    co("Hit-3.1")
                    cout<<"value of h: "<<h<<el
                    if(h+1>=b[i+1].first && h+1<=b[i+1].second){
                        co("Hit-3.1.1")
                        a[i]=1;
                        h++;
                    } else a[i]=0;
                } else{
                    co("Hit-3.2")
                    f=false;
                    break;
                }
            } else{
                co("Hit-4")
                if(h<b[i].first || h>b[i].second){
                    a[i]=0;
                    f=false;
                    break;
                }
            }
        }
        cout<<"Final a[i]: "<<a[i]<<el
        elc
    }
    flx(a)
    if(!f) co(-1) else {flx(a)}
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