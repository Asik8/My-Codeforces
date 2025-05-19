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
    map<ll,ll>m;
    vector <ll> v(n);
    for (auto& x:v){
        cin >>x; 
    }
    ll c=0;
    ll in=-1,i=0;
    while(i<n){
        if(m[2]>=2 && m[0]>=3 && m[1]>=1 && m[3]>=1 && m[5]>=1){
            in=i;
            break;
        } else{
            m[v[i]]++;
            i++;
        }
    }
    if(m[2]>=2 && m[0]>=3 && m[1]>=1 && m[3]>=1 && m[5]>=1){
        in=i;
    }
    if(in==-1) co(0) else co(in)
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