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

const int N=2e5+9;
int a[N],t[4*N];

ll merge(int l,int r){
    return (l&r);
}

void build(int n,int b,int e){
    if(b==e){
        t[n]=a[b];
        return;
    }
    ll m=(b+e)/2,l=(2*n),r=(2*n)+1;
    build(l,b,m);
    build(r,m+1,e);
    t[n]=(t[l]&t[r]);
}

ll query(int n,int b,int e,int i,int j){
    if(e<i || j<b) return -1;
    if(b>=i && e<=j) return t[n];
    ll m=(b+e)/2,l=(2*n),r=(2*n)+1;
    int y=query(l,b,m,i,j);
    int x=query(r,m+1,e,i,j);
    if(y==-1) return x;
    if(x==-1) return y;
    return (y&x);
}

int fndMax(int n,int lw,int k){
    int l=lw,r=n,ans=-1;
    while(l<=r){
        ll m=(l+r)/2;
        int c=query(1,1,n,lw,m);
        if(c>=k){
            ans=m;
            l=m+1;
        }
        else r=m-1;
    }
    return ans;
}

void asikM(){
    ll n;
    cin >> n;
    vector <ll> v(n),ans;
    fl(i,1,n+1) cin>>a[i]; 
    build(1,1,n);
    ll q;
    cin>>q;
    while(q--){
        ll l,k;
        cin>>l>>k;
        ct(fndMax(n,l,k))
    }
    // flx(ans)
    // fl(i,1,n+1) ct(t[i])
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