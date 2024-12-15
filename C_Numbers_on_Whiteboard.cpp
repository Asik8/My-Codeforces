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
        ll n;
        cin >> n;
        vector <pair<ll,ll>> v;
        priority_queue<ll>pq;
        for (int i=1;i<=n;i++) pq.push(i);
        while(pq.size()>1){
            ll a=pq.top();
            pq.pop();
            ll b= pq.top();
            pq.pop();
            pq.push(((a+b+1)/2));
            v.pb({b,a});
        }       
        cout<<pq.top()<<endl;
        for(auto x:v) cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;
}