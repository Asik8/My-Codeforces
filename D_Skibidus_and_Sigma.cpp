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

vector<ll> ch(const vector<vector<ll>>& arrays) {
    vector<pair<ll, int>> sum_indices;
    for (int i = 0; i < arrays.size(); ++i) {
        ll current_sum = accumulate(arrays[i].begin(), arrays[i].end(), 0LL);
        sum_indices.push_back({current_sum, i});
    }
    sort(sum_indices.begin(), sum_indices.end(), greater<>()); 
    vector<ll> indices;
    for (const auto& p : sum_indices) {
        indices.push_back(p.second);
    }
    return indices;
}

void asikM(){
    ll n, m;
    cin >> n >> m;
    vec(vec(ll)) v(n, vec(ll)(m));
    fl(i, 0, n) {
        fl(j, 0, m) {
            cin >> v[i][j];
        }
    }
    vec(ll) in = ch(v);
    vec(ll) a;
    fl(i, 0, sz(in)) {
        fl(j, 0, m) {
            a.pb(v[in[i]][j]); 
        }
    }
    fl(i, 1, m * n) a[i] += a[i - 1];
    co(accumulate(all(a), 0LL))
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    cin >> t;
    while (t--)
        asikM();      
    return 0;
}
