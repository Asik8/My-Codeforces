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
    ll n,m,a,b,c=0;
    cin >> n>>m>>a>>b;
    while(n>1 || m>1){
        // cout<<"Intitial:- \n";
        // cout<<n<<" "<<m<<" "<<a<<" "<<b<<el
        ll c1=(m-b)*n,c2=(b-1)*n;
        ll r1=(n-a)*m,r2=(a-1)*m;
        // cout<<c1<<" "<<c2<<" "<<r1<<" "<<r2<<el
        if(c1>=c2 && c1>=r1 && c1>=r2) m-=(m-b);
        else if(c2>=c1 && c2>=r1 && c2>=r2) m=(m-b)+1;
        else if(r1>=c1 && r1>=c2 && r1>=r2) n-=(n-a);
        else if(r2>=c1 && r2>=c2 && r2>=r1) n=(n-a)+1;
        a=(n+1)/2;
        b=(m+1)/2;
        // cout<<"Updated:-\n"<<n<<" "<<m<<" "<<a<<" "<<b<<el
        // elc
        c++;
    }
    co(c+1)
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
