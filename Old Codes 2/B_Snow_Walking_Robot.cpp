#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pbs insert
#define py cout<<"YES\n";
#define pys cout<<"Yes\n";
#define pn cout<<"NO\n";
#define pns cout<<"No\n";
#define co(x1) cout<<x1<<"\n";
#define ct(x1) cout<<x1<<" ";
#define elc cout<<"\n";
#define el "\n";
#define f(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define fr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define forni for(int i=0;i<n;i++)
#define all(x1) x1.begin(),x1.end()
#define allr(x1) x1.rbegin(),x1.rend()
#define sz(x) x.size()
#define vec(x) vector<x>

void asikM(){
    string s,ans;
    cin>>s;
    map<char,ll>mp;
    for(auto x:s) mp[x]++;
    // for(auto x:mp) cout<<x.first<<" "<<x.second<<endl;
    // elc
    ll l=min(mp['L'],mp['R']),r=min(mp['U'],mp['D']);
    if(l>0 && r>0){
        for(int i=0;i<l;i++) ans+='L';
        for(int i=0;i<r;i++) ans+='D';
        for(int i=0;i<l;i++) ans+='R';
        for(int i=0;i<r;i++) ans+='U';
    }
    else if(l>0){
        ans.clear();
        ans+="LR";
    }
    else if(r>0){
        ans.clear();
        ans+="DU";
    }
    co(sz(ans))
    co(ans)
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