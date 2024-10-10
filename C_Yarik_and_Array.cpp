#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n,p,m=INT_MIN,a,s=0;
        cin >> n;
        cin>>a;
        p = abs(a)%2; 
        s=a;
        m = s;
        for(int i=1;i<n;i++)
        {
            cin>>a;
            if(abs(a)%2 != p) s+=a;
            else s = a;
            if(a>s) s = a;
            p = abs(a)%2;
            m = max(m,s);
        }     
        cout<<m<<endl;
    }
    return 0;
}