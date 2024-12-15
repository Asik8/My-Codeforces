#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n,m,q;
        cin >> n>>m>>q;
        ll t1,t2,s;
        cin>>t1>>t2;
        if(t2<t1) swap(t1,t2);
        cin>>s;
        if(s>t2) cout<<n-t2<<endl;
        else if(s<t1) cout<<t1-1<<endl;
        else cout<<(t2-t1)/2<<endl;
    }
    return 0;
}