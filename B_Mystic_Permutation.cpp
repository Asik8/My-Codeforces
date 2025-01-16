#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define co(x1) cout<<x1<<"\n";
#define f(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define fr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define forni for(int i=0;i<n;i++)
#define sz(x) x.size()
#define vec vector<ll>

void asikM(){
    ll n;
    cin >> n;
    vector <ll> v(n),ans;
    for (auto& x:v) cin >>x; 
    if(n==1){
        co(-1)
        return;
    }
    vector<bool> ch(n+1,false);
    ll l=1;
    forni{
        if(v[i]!=l && l<=n){
            ch[l]=true;
            ans.pb(l++);
        }
        else if(v[i]==l && l<n){
            ch[l+1]=true;
            ans.pb(l+1);
        }
        while(ch[l])l++;
    }
    f(i,1,n+1){
        if(!ch[i]) ans.pb(i);
    }
    f(i,1,n){
        if(v[i]==ans[i]) swap(ans[i],ans[i-1]);
    }
    for(auto x:ans) cout<<x<<" ";
    cout<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        asikM();      
    }
    return 0;
}