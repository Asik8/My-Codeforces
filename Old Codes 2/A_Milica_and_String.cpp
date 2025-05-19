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
#define f(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define fr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define forni for(int i=0;i<n;i++)
#define all(x1) x1.begin(),x1.end()
#define allr(x1) x1.rbegin(),x1.rend()
#define sz(x) x.size()
#define vec(x) vector<x>

void asikM(){
    ll n,k;
    cin >>n>>k;
    string s;
    cin>>s;
    map<char,ll>m;
    for(auto x:s) m[x]++;
    if(m['B']==k){
        co(0)
        return;
    }
    if(m['B']<k){
        ll need=k-m['B'],l=0;
        forni{
            if(s[i]=='A')
                l++;
            if(l==need){
                co(1)
                cout<<i+1<<" "<<'B'<<el;
                return;
            }
        }
    }
    if(m['B']>k){
        ll need=m['B']-k,l=0;
        forni{
            if(s[i]=='B')
                l++;
            if(l==need){
                co(1)
                cout<<i+1<<" "<<'A'<<el;
                return;
            }
        }
    }
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