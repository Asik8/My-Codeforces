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
#define sz(x) x.size()
#define vec(x) vector<x>

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n,x=0,y=0;
        cin >> n;
        string s;
        cin>>s;
        set<char>st;
        for(auto l:s){
            st.insert(l);
            if(l=='N') y++;
            if(l=='S') y--;
            if(l=='E') x++;
            if(l=='W') x--;
        }
        map<char,ll> mp,m;
        if(x==0 && y==0 && n==2)pn
        else if(!(x%2) && !(y%2)){
            forni mp[s[i]]++;
            if(n==4 && st.size()==4){
                forni{
                    if(s[i]=='W' || s[i]=='E') cout<<"H";
                    else cout<<"R";
                }
                cout<<endl;
                continue;
            }
            forni{
                m[s[i]]++;
                if(m[s[i]]<=mp[s[i]]/2) cout<<"H";
                else cout<<"R";
            }
            cout<<endl;
        }
        else pn       
    }
    return 0;
}