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

struct node{
    ll mn,count;
};

const int N=1e5+9;
ll a[N];
node t[4*N];

node merge(node l,node r){
    node ans;
    ans.mn=min(l.mn,r.mn);
    ans.count=0;
    if(l.mn == ans.mn) ans.count+=l.count;
    if(r.mn == ans.mn) ans.count+=r.count;
    return ans;
}

void build(int n,int b,int e){
    if(b==e){
        t[n].mn=a[b];
        t[n].count=1;
        return;
    }
    int m=(b+e)/2,l=n*2,r=(n*2)+1;
    build(l,b,m);
    build(r,m+1,e);
    t[n]=merge(t[l],t[r]);
}

void update(int n,int b,int e,int i,int v){
    if(i<b || i>e) return;
    if(b==e){
        t[n].mn=v;
        t[n].count=1;
        return;
    }
    int m=(b+e)/2,l=(n*2),r=(n*2)+1;
    update(l,b,m,i,v);
    update(r,m+1,e,i,v);
    t[n]=merge(t[l],t[r]);
}

node query(int n,int b,int e,int i, int j){
    if(e<i || b>j) return {LLONG_MAX,0};
    if(b>=i && e<=j) return t[n];
    int m=(b+e)/2,l=(n*2),r=(n*2)+1;
    return merge(query(l,b,m,i,j),query(r,m+1,e,i,j));
}

void asikM(){
    ll n,m;
    cin >> n>>m;
    fl(i,1,n+1) cin>>a[i]; 
    build(1,1,n);
    while(m--){
        ll t;
        cin>>t;
        if(t==1){
            int in,v;
            cin>>in>>v;
            in++;
            update(1,1,n,in,v);
        }
        else{
            int l,r;
            cin>>l>>r;
            l++;
            node ans=query(1,1,n,l,r);
            cout<<ans.mn<<" "<<ans.count<<el
        }
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