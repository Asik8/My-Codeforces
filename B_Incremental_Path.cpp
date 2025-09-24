// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define pb push_back
// #define pbs insert
// #define pi pair<ll,ll>
// #define py cout<<"YES\n";
// #define pys cout<<"Yes\n";
// #define pn cout<<"NO\n";
// #define pns cout<<"No\n";
// #define co(x1) cout<<x1<<"\n";
// #define ct(x1) cout<<x1<<" ";
// #define elc cout<<"\n";
// #define el "\n";
// #define fl(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
// #define flr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
// #define flx(x1) for(auto x:x1) ct(x) elc
// #define forni for(int i=0;i<n;i++)
// #define all(x1) x1.begin(),x1.end()
// #define allr(x1) x1.rbegin(),x1.rend()
// #define sz(x) x.size()
// #define vec(x) vector<x>
// const ll N=1e5;

// void asikM(){
//     ll n,m;
//     cin >> n>>m;
//     vec(ll)v(m);
//     string s;
//     cin>>s;
//     for(auto &x:v) cin>>x;
//     set<ll>st;
//     fl(i,0,m) st.insert(v[i]);
//     fl(i,1,n+1){
//         ll p=1;
//         for(int j=0;j<i;j++){
//             if(s[j]=='B'){
//                 p++;
//                 while(st.count(p))p++;
//             } else p++;
//             // cout<<j<<" "<<p<<el
//         }
//         // elc
//         // cout<<i<<" "<<p<<el
//         // elc
//         st.insert(p);
//     }
//     co(sz(st))
//     flx(st)
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll t=1;
//     cin >> t;
//     while (t--)
//     asikM();      
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    vector<ll> v(m);
    set<ll> st;
    for (auto &x : v) {
        cin >> x;
        st.insert(x);
    }
    ll p = 1; 
    for (int i = 0; i < n; i++) {
        if (s[i] == 'A') {
            p++;
        } else {
            p++;
            while (st.count(p)) p++;
        }
        st.insert(p); 
    }

    cout << st.size() << "\n";
    for (auto x : st) cout << x << " ";
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
