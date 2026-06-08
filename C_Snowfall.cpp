/******************************************************************
 *                   In the name of Allah                         *
 *----------------------------------------------------------------*
 * Author   : asikM                                               *
 * Institute: Daffodil International University (DIU) (Alumni)    *
 * Country  : Bangladesh - Chapai Nawabganj                       *
 ******************************************************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define yn(f) cout << (f ? "YES\n" : "NO\n");
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
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(auto& x:v)cin>>x; 
    ll c=0;
    vector<ll>d,b,cd,o;
    forni if(!(v[i]%6)) ct(v[i])
    forni if((v[i]%6) && v[i]%2==0) ct(v[i])
    forni if(v[i]%2 && v[i]%3) ct(v[i])
    forni if((v[i]%6) && v[i]%3==0) ct(v[i])
    elc
}

int main() {
    FastIN ll t=1; 
    cin>>t;
    while(t--){asikM();}
    return 0;
}

