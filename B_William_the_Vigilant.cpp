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

void asikM(){
    ll n,k,op=0;
    cin >> n>>k;
    string s;
    cin>>s;
    ll l=0;
    while(l<n-2){
        if(s[l]=='a' && s[l+1]=='b' && s[l+2]=='c'){
            op++;
            l+=3;
        } else l++;
    }
    while(k--){
        ll pos;
        char ch;
        cin>>pos>>ch;
        pos--;
        l=max(0LL,pos-2);
        for(int i=l;i<=pos;i++){
            if(s[i]=='a' && s[i+1]=='b' && s[i+2]=='c') op--;
        }
        s[pos]=ch;
        for(int i=l;i<=pos;i++){
            if(s[i]=='a' && s[i+1]=='b' && s[i+2]=='c') op++;
        }
        co(op)
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    // cin >> t;
    while (t--)
    asikM();      
    return 0;
}