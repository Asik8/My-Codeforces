/******************************************************************
 *                   In the name of Allah                         *
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
#define rtc(x) {cout<<x<<endl; return;} 
#define py {cout<<"YES\n"; return;}
#define pys {cout<<"Yes\n"; return;}
#define pn {cout<<"NO\n"; return;}
#define pns {cout<<"No\n"; return;}
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
#define FastIN {ios::sync_with_stdio(false); cin.tie(NULL);}

void asikM(){
    ll n,k,q;
    cin>>n>>k>>q;
    vec(ll) v(n,-1);
    while(q--){
        ll c,l,r;
        cin>>c>>l>>r;
        l--;
        if(c==1){
            fl(i,l,r,1) v[i]=k;
        } else{
            set<ll>s;
            fl(i,0,k,1) s.insert(i);
            vector<ll>used;
            fl(i,l,r,1){
                if(v[i]!=-1) {
                    used.pbk(i);
                    if(s.count(v[i])) s.erase(v[i]);
                    if(v[i]==k) v[i]=k+1;
                }
            }
            fl(i,l,r,1){
                if(v[i]==-1) {
                    ll val=*s.begin();
                    s.erase(val);
                    v[i]=val;
                }
            }
            if(sz(s)){
                for(auto x:used){
                    if(sz(s)){
                        ll val=*s.rbegin();
                        s.erase(val);
                        v[x]=val;
                    } else break;
                }
            } 
        }
    }
    forni if(v[i]==-1) v[i]=k+1;
    flx(v)
}

int main() {
    FastIN ll t=1; 
    cin>>t;
    while(t--){asikM();}
    return 0;
}

