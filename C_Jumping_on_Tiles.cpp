#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define f(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define fr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define forni for(int i=0;i<n;i++)
#define pi pair<char,ll>

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        string s;
        cin>>s;
        vector<pair<char,ll>>v;
        vector<ll>ans;
        ll n=s.size();
        char mn=min(s[0],s.back());
        char mx=max(s[0],s.back());
        forni if(s[i]>=mn && s[i]<=mx) v.pb({s[i],i});
        sort(v.begin(),v.end(),[&] (pi a,pi b){
            return a.second<b.second;
        });
        n=v.size();
        if(n>2){
            sort(v.begin()+1,v.begin()+n-1,[&] (pi a,pi b){
                if(s[0]>s[s.size()-1]){
                    return a.first>b.first;
                }
                return a.first<b.first;
            });
        }
        ll cost=0;
        ans.pb(1);
        for(int i=1;i<n;i++){
            cost+=llabs(v[i].first-v[i-1].first);
            ans.pb(v[i].second+1);
        }
        cout<<cost<<" "<<ans.size()<<endl;
        for(auto x:ans) cout<<x<<" ";
        cout<<endl;  
    }
    return 0;
}