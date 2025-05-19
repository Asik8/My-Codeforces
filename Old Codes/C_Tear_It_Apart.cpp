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
    string s;
    cin>>s;
    ll n=sz(s),mn=INT_MAX;
    for(char i='a';i<='z';i++){
        ll c=0,mx=0;
        f(j,0,n){
            if(s[j]!=i){
                c++;
                mx=max(mx,c);
            }
            else c=0;
        }
        mn=min(mn,mx);
    }
    if(mn==0){
        co(0)
        return;
    }
    ll c=0;
    while(mn!=1){
        c++;
        mn/=2;
    }
    co(c+mn)
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