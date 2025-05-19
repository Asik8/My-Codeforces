#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define pob pop_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector <int> ev,ov,a;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            if(x%2==0) ev.pb(x);
            else ov.pb(x);
        }
        
        for(int i:ev)a.pb(i);
        for(int i:ov)a.pb(i);

        int c=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if((__gcd(a[i],2*a[j]))>1)c++;
            }
        } 
        cout<<c<<endl;     
    }

    return 0;
}