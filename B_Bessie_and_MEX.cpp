#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define forni for (int i = 0; i < n; i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n,mex = 0;
        cin >> n;
        vector <ll> v(n),f(n+1);
        for (auto& x:v) cin >>x;
        vector<int> ans(n);
        forni 
        {
            if(v[i] >= 0) ans[i] = mex;
            else ans[i] = mex-v[i];
            f[ans[i]] = true;
            while(f[mex]) mex++;
        }
        for(int x:ans) cout<<x<<" ";
        cout<<endl;       
    }
    return 0;
}