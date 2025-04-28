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
    ll n,m,k;
    cin >>n>>m>>k;
    string s;
    cin>>s;
    ll l=0,r=0;
    while(r<n){
        ll c=0,in=-1;
        if(s[r]=='0'){
            while(s[r]=='0'){
                c++;
                if(c==m){
                    l++;
                    in=r;
                    break;
                }
                r++;
            }
            if(in != -1){
                for(int i=in;i<min(n,in+k);i++) s[i]='1';
                r=min(in+k,n);
            }
        }
        else r++;
    }
    co(l)
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    cin >> t;
    while (t--)
    asikM();      
    return 0;
}