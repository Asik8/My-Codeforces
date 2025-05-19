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
        ll n,par,m=INT_MIN,a,s=0;
        cin >> n;
        cin>>a;
        par = abs(a)%2; 
        s=a;
        m = s;
        for(int i=1;i<n;i++)
        {
            cin>>a;
            if(abs(a)%2 != par) s+=a;
            else s = a;
            if(a>s) s = a;
            par = abs(a)%2;
            m = max(m,s);
        }     
        cout<<m<<endl;
    }
    return 0;
}