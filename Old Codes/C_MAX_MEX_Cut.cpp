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
    ll n,c=0;
    cin >> n;
    string s,t;
    cin>>s>>t;
    for(int i=0;i<n;){
        if(s[i]=='0' && t[i]=='1'){
            c+=2;
            i++;
        } else if(s[i]=='1' && t[i]=='0'){
            c+=2;
            i++;
        } else if(s[i]=='0' && t[i]=='0' && i+1<n && s[i+1]=='1' && t[i+1]=='1'){
            c+=2;
            i+=2;
        } else if(s[i]=='0' && t[i]=='0'){
            c+=1;
            i++;
        } else if(s[i]=='1' && t[i]=='1' && i+1<n && s[i+1]=='0' && t[i+1]=='0'){
            c+=2;
            i+=2;
        } else if(s[i]=='1' && t[i]=='1')i++;
    }
    co(c)
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