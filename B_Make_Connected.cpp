/******************************************************************
 *              Bismillah Hir Rahman Nir Raheem                   *
 *----------------------------------------------------------------*
 * Author   : asikM                                               *
 * Institute: Daffodil International University (DIU)             *
 * Country  : Bangladesh - Chapai Nawabganj                       *
 ******************************************************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

// ---------- Universal Access Function ----------
template <typename T, typename = void>
struct is_iterable : false_type {};
template <typename T>
struct is_iterable<T, decltype(begin(declval<T>()), end(declval<T>()), void())> : true_type {};
template <typename T>
struct is_pair : false_type {};
template <typename T1, typename T2>
struct is_pair<pair<T1, T2>> : true_type {};
template <typename T>
void adc(const T& x){
    if constexpr (is_iterable<T>::value && !is_same_v<T, string>) {
        for (auto &val : x) {
            adc(val);
            cout << " ";
        }
    }
    else if constexpr (is_pair<T>::value) {
        adc(x.first);
        cout << " ";
        adc(x.second);
    }
    else cout << x;
}
// ---------- End of the Universal Access ----------

#define pbk push_back
#define pi pair<ll,ll>
#define py {cout<<"YES\n"; return;}
#define pys cout<<"Yes\n";
#define pn cout<<"NO\n";
#define pns cout<<"No\n";
#define co(x1) cout<<x1<<"\n";
#define ct(x1) cout<<x1<<" ";
#define elc cout<<"\n";
#define el "\n";
#define fl(x1,x2,x3,x4) for(int x1=x2;x1<x3;x1+=x4)
#define flr(x1,x2,x3,x4) for(int x1=x2;x1>=x3;x1-=x4)
#define flx(x1) for(auto x:x1) ct(x) elc
#define acv(x1,x) for(auto x:x1)
#define acp(x1,x,y) for(auto [x,y]:x1)
#define forni for(int i=0;i<n;i++)
#define all(x1) x1.begin(),x1.end()
#define allr(x1) x1.rbegin(),x1.rend()
#define srt(x1) sort(all(x1));
#define sz(x) x.size()
#define vec(x) vector<x>
#define timeMan {ios::sync_with_stdio(false); cin.tie(NULL);}

void asikM(){
    ll n;
    cin>>n;
    char c[n][n]; 
    forni fl(j,0,n,1) cin>>c[i][j];
    multiset<ll>sum,diff,x,y;
    forni{
        fl(j,0,n,1){
            if(c[i][j]=='#'){
                sum.insert(i+j);
                diff.insert(i-j);
                x.insert(i);
                y.insert(j);
            }
        }
    }
    if(sz(x)<2) py
    bool f=false;
    f|=((*(--sum.end())-*(sum.begin()))<=1);
    f|=((*(--diff.end())-*(diff.begin()))<=1);
    f|=(((*(--x.end())-*(x.begin()))<=1) && ((*(--y.end())-*(y.begin()))<=1));
    if(f) py else pn
}

int main() {
    timeMan ll t=1; cin>>t;
    while(t--){asikM();}
    return 0;
}

