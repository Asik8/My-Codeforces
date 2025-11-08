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
#define py cout<<"YES\n";
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
    ll n,k;
    cin>>n>>k;
    string s,t;
    cin>>s>>t;
    vector<ll>v(n),la(n);
    ll l=n-1,mx=0;
    flr(i,n-1,0,1){
        l=min(l,(ll)i);
        while(l>=0 && s[l]!=t[i]) l--;
        if(l<0){ co(-1) return;}
        v[i]=l;
        mx=max(mx,i-l);
    }
    if(mx>k){ co(-1) return;}
    vector<vector<ll>>ans;
    forni la[i]=i;
    fl(i,0,mx,1){
        vec(ll) tmp(n);
        tmp[0]=la[0];
        fl(j,1,n,1){
            if(la[j]!=v[j]) tmp[j]=la[j-1];
            else tmp[j]=la[j];
        }
        ans.pbk(tmp);
        swap(la,tmp);
    }
    assert(mx==0 || ans.back()==v);
    co(mx)
    fl(i,0,mx,1){
        acv(ans[i],x) cout<<s[x];
        elc
    }
}

int main() {
    timeMan ll t=1; cin>>t;
    while(t--){asikM();}
    return 0;
}

