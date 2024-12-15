#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector <ll> a(n),b(n+1);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i <= n; i++) cin >> b[i];
        ll st=0,c = 1e18;
        for(int i=0;i<n;i++) 
        {
            st+=llabs(a[i]-b[i]);
            c = min(c,llabs(a[i]-b[n]));
            c = min(c,llabs(b[i]-b[n]));
            if(min(a[i],b[i])<= b[n] && max(a[i],b[i])>=b[n]) c=0;
        }
        cout<<st+c+1<<endl;
    }
    return 0;
}