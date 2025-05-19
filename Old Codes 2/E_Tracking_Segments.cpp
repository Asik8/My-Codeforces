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

const int N=1e5+9;
ll t[4*N];

void build(int n,int b,int e){
    if(b==e){
        t[n]=0;
        return;
    }
    int m=(b+e)/2,l=n*2,r=(n*2)+1;
    build(l,b,m);
    build(r,m+1,e);
    t[n]=(t[l]+t[r]);
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
    t[n]=(t[l]+t[r]);
}

ll query(int n,int b,int e,int i, int j){
    if(e<i || b>j) return 0;
    if(b>=i && e<=j) return t[n];
    int m=(b+e)/2,l=(n*2),r=(n*2)+1;
    return (query(l,b,m,i,j)+query(r,m+1,e,i,j));
}

void asikM(){
    ll n,m,q;
    cin >> n>>m;
    vec(pi) a(m);
    fl(i,0,m) cin>>a[i].first>>a[i].second;
    cin>>q;
    vec(ll)qu(q);
    fl(i,0,q) cin>>qu[i];
    auto ok = [&](int mid) {
        build(1, 1, n);
        for (int i = 0;i <= mid;i++) update(1, 1, n, qu[i], 1);
        bool found = false;
        for (int i = 0;i < m;i++) {
            int L = a[i].first, R = a[i].second, seg_len, one, zero;
            seg_len = (R - L) + 1;
            one = query(1, 1, n, L, R);
            zero = (seg_len - one);
            if (one > zero) {
                found = true;
                break;
            }
        }
        return found;
    };
    ll l=0,r=q-1,mid,ans=-1;
    while(l<=r){
        mid=l+(r-l)/2;
        if(ok(mid)){
            ans=mid;
            r=mid-1;
        }
        else l=mid+1;
    }
    if(ans!=-1) ans++;
    co(ans)
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    asikM();      
    return 0;
}