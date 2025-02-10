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
    string a,b;
    cin>>a>>b;
    if(a[0]==b[0]){
        py
        cout<<a[0]<<'*'<<el;
        return;
    }
    if(a.back()==b.back()){
        py
        cout<<'*'<<a.back()<<el;
        return;
    }
    f(i,0,sz(a)-1){
        string c;
        c+=a[i];
        c+=a[i+1];
        f(j,0,sz(b)-1){
            if(c[0]==b[j] && c[1]==b[j+1]){
                py
                cout<<'*'<<c<<'*'<<el;
                return;
            }
        }
    }
    pn
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