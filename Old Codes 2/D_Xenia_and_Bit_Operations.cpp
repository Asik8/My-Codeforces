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

const int N=(1<<17)+9;
ll a[N],t[4*N];

ll merge(int l, int r,int len){
    int p=0;
    p=__lg(len);
    if(p&1) return (l|r);
    else return (l^r);
}

void build(int n,int b,int e){
    if(b==e){
        t[n]=a[b];
        return;
    }
    int m=(b+e)/2,l=n*2,r=(n*2)+1;
    build(l,b,m);
    build(r,m+1,e);
    t[n]=merge(t[l],t[r],(e-b+1));
}

void update(int n,int b,int e,int i,int v){
    if(i<b || i>e) return;
    if(b==e){
        t[n]=v;
        return;
    }
    int m=(b+e)/2,l=(n*2),r=(n*2)+1;
    update(l,b,m,i,v);
    update(r,m+1,e,i,v);
    t[n]=merge(t[l],t[r],(e-b+1));
}

void asikM(){
    ll n,m;
    cin >> n>>m;
    n=(1<<n);
    fl(i,1,n+1) cin>>a[i]; 
    build(1,1,n);
    while(m--){
        ll a,b;
        cin>>a>>b;
        update(1,1,n,a,b);
        co(t[1])
    }
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