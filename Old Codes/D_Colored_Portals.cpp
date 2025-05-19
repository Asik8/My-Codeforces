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
    ll n,q;
    cin >>n>>q;
    string s[n];
    forni cin>>s[i];
    int left[n][6],right[n][6];
    map<ll,ll>m;
    map<string ,ll> ind;
    ind["BG"]=0;
    ind["BR"]=1;
    ind["BY"]=2;
    ind["GR"]=3;
    ind["GY"]=4;
    ind["RY"]=5;
    vec(string)colors={"BG", "BR", "BY", "GR", "GY", "RY"};
    forni{
        m[ind[s[i]]]=i;
        fl(j,0,6){
            if(m.find(j)!=m.end()) left[i][j]=m[j];
            else left[i][j]=-1;
        }
    }
    m.clear();
    for(int i=n-1;i>=0;i--){
        m[ind[s[i]]]=i;
        fl(j,0,6){
            if(m.find(j)!=m.end()) right[i][j]=m[j];
            else right[i][j]=-1;
        }
    }
    while(q--){
        ll x,y;
        cin>>x>>y;
        if(x>y) swap(x,y);
        x--,y--;
        string a=s[x],b=s[y];
        if(a[0]==b[0] || a[0]==b[1] || a[1]==b[0] || a[1]==b[1]) co(abs(x-y))
        else{
            vec(string) ch;
            for(auto &l:colors)
                if(l!=a && l!=b) ch.pb(l);
            ll ans=INT_MAX;
            for(auto l:ch){
                vec(ll)in;
                if(left[x][ind[l]]!=-1) in.pb(left[x][ind[l]]);
                if(right[x][ind[l]]!=-1) in.pb(right[x][ind[l]]);
                if(left[y][ind[l]]!=-1) in.pb(left[y][ind[l]]);
                if(right[y][ind[l]]!=-1) in.pb(right[y][ind[l]]);
                for(auto &r:in){
                    ll d=0;
                    d+=abs(x-r);
                    d+=abs(y-r);
                    ans=min(ans,d);
                }
            }
            if(ans==INT_MAX) co(-1)
            else co(ans)
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