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
ll t=1;

void asikM(){
    string c;
    char ch[8] = {'a','b','c','d','e','f','g','h'};
    cin>>c;
    for (int i = 1; i < 9; i++){
        if (c[1] != '0'+i)
        {
            cout<<c[0]<<i<<endl;
        }
    }
    for (int i = 0; i < 8; i++) {
        if (c[0] != ch[i])
        {
            cout<<ch[i]<<c[1]<<el;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--)
    asikM();      
    return 0;
}