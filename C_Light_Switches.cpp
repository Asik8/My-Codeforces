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

// void asikM(){
//     ll n,k;
//     cin >>n>>k;
//     vector <ll> v(n);
//     for (auto& x:v) cin >>x; 
//     map<ll,ll> m;
//     ll mx=*max_element(all(v));
//     if((mx-*min_element(all(v)))+1<=k){
//         co(mx)
//         return;
//     }
//     fl(i,0,n){
//         ll c=mx/v[i];
//         if(c&1) c--;
//         c*=k;
//         c+=v[i];
//         // co(c)
//         fl(j,0,k) m[c+j]++;
//     }
//     ll ans=-1;
//     for(auto [x,y]:m){
//         if(y==n){
//             ans=x;
//             break;
//         }
//     }
//     co(ans)
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

