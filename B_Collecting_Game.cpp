#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector <pair<ll,ll>> v(n);
        for (int i=0;i<n;i++) 
        {
            cin>>v[i].first;
            v[i].second = i;
        }
        sort(v.begin(),v.end());
        vector<ll> psum(n);
        psum[0]= v[0].first;
        for(int i=1;i<n;i++) psum[i] = psum[i-1]+v[i].first;
        vector<ll> ans(n,-1);
        stack<int> st;
        for(int i=0;i<n;i++){
           st.push(v[i].second);
           if(i==n-1 or v[i+1].first>psum[i]){
                while(!st.empty()){
                   ans[st.top()]=i;
                   st.pop();
                }
           }
        }
        for(ll val:ans) cout<<val<<" ";
        cout<<endl;
    }
    return 0;
}