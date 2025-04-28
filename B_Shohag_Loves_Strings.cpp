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
    string s;
    cin>>s;
    if(sz(s)<2){
        co(-1)
        return;
    }
    for(int i=0;i<sz(s)-1;i++){
        if(s[i]==s[i+1]){
            cout<<s[i]<<s[i]<<el
            return;
        }
    }
    map<char,ll>m;
    for(auto x:s) m[x]++;
    if(sz(m)==2){
        co(-1)
        return;
    }
    m.clear();
    ll l=0,r=0;
    while(r<sz(s)){
        if(!m[s[r]]) m[s[r]]++;
        else{
            while(m[s[r]]!=0) m[s[l++]]--;
            m[s[r]]++;
        }
        if(sz(m)==3) break;
        r++;
    }
    fl(i,l,r+1) cout<<s[i];
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