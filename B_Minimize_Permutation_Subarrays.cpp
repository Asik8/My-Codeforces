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
    int n;
    cin >> n;
    vector <ll> v(n);
    for (auto& x:v) cin >>x; 
    int in1=0,in2=0,inn=0;
    forni{
        if(v[i]==1) in1=i+1;
        if(v[i]==2) in2=i+1;
        if(v[i]==n) inn=i+1;
    }
    if(inn<min(in1,in2)) cout<<inn<<" "<<min(in1,in2)<<el
    else if(inn>max(in1,in2))cout<<inn<<" "<<max(in1,in2)<<el
    else cout<<in1<<" "<<in2<<el
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