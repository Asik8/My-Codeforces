#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pbs insert
#define pi pair<ll,ll>
#define py cout<<"YES\n";
#define pys cout<<"yes\n";
#define pn cout<<"NO\n";
#define pns cout<<"no\n";
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
    if(is_sorted(all(v))){
        pys
        cout<<"1 1\n";
        return;
    }
    ll in=-1,c=0;
    for(int i=0;i<n-1;i++){
        if(v[i]>v[i+1]){
            if(in==-1) in=i;
            c++;
        }
    }
    // cout<<in<<' '<<c<<el
    reverse(v.begin()+in,v.begin()+in+c+1);
    // flx(v)
    if(is_sorted(all(v))){
        pys
        cout<<in+1<<' '<<in+c+1<<el
        return;
    } else pns
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