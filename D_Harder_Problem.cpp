#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define co(x1) cout<<x1<<"\n";
#define f(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define fr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define forni for(int i=0;i<n;i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        set<ll>s,ch;
        vector<ll>v(n),ans,rem;
        forni{
            cin>>v[i];
            s.insert(v[i]);
        }       
        for(int i=1;i<=n;i++){
            if(s.find(i)==s.end()){
                rem.pb(i);
            }
        }
        ll j=0;
        forni{
            if(ch.find(v[i])==ch.end()){
                ans.pb(v[i]);
                ch.insert(v[i]);
            }
            else{
                ans.pb(rem[j]);
                j++;
            }
        }
        for(auto x:ans)cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}