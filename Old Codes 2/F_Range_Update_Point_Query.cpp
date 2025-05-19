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
int a[N];
struct node{
    int val;
    bool st;
};
node t[4*N];

ll SumOFDegits(int l){
    ll s=0;
    while(l){
        s+=(l%10);
        l/=10;
    }
    return s;
}

node merge(node l, node r){
    node res;
    res.val=l.val+r.val;
    res.st=(l.st&&r.st);
    return res;
}

void build(int n,int b,int e){
    if(b==e){
        t[n].val=a[b];
        t[n].st=(a[b]<=9);
        return;
    }
    ll m=(b+e)/2,l=(2*n),r=(2*n)+1;
    build(l,b,m);
    build(r,m+1,e);
    t[n]=merge(t[l],t[r]);
}

void update(int n,int b,int e,int i,int j){
    if(b>e || b>j || i>e) return ;
    if(t[n].st) return;
    if(b==e){
        t[n].val = SumOFDegits(t[n].val);
        t[n].st = (t[n].val<=9);
        return;
    }
    ll m=(b+e)/2,l=(2*n),r=(2*n)+1;
    update(l,b,m,i,j);
    update(r,m+1,e,i,j);
    t[n]=merge(t[l],t[r]);
}

ll query(int n,int b,int e,int x){
    if(b==e) return t[n].val;
    ll m=(b+e)/2,l=(2*n),r=(2*n)+1;
    if(x<=m) return query(l,b,m,x);
    else return query(r,m+1,e,x);
}


void asikM(){
    ll n,q;
    cin >> n>>q;
    vector <ll> v(n);
    fl(i,1,n+1) cin>>a[i]; 
    build(1,1,n);
    while(q--){
        ll x;
        cin>>x;
        if(x==1){
            ll l,r;
            cin>>l>>r;
            update(1,1,n,l,r);
        } else{
            ll l;
            cin>>l;
            co(query(1,1,n,l))
        }
    }
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