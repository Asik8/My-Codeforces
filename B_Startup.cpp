#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--){
        ll n,k;
        cin>>n>>k;
        map<ll,ll>mp;
        unordered_set<ll> s;
        while(k--){
            ll b,c;
            cin>>b>>c;
            s.insert(b);
            mp[b]+=c;
        }  
        ll c=0;
        vector<pair<ll,ll>>ans;
        for(auto it:s){
            ans.pb({mp[it],it});
        }
        sort(ans.rbegin(),ans.rend());
        // for(auto x:ans) cout<<x.first<<" "<<x.second<<endl;
        for(int i=0;i<ans.size();i++){
            if(n<=0) break;
            c+=ans[i].first;
            n--;
        }
        cout<<c<<endl;
    }
    return 0;
}