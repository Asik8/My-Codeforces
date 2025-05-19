#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        int n,d,k;
        cin>>n>>d>>k;
        vector<int> a(n+1,0),b(n+1,0);
        while(k--)
        {
            int x,y;
            cin>>x>>y;
            a[x]++;
            b[y]++;
        }      
        for(int i=0;i<n;i++) a[i+1]+= a[i];
        for(int i=0;i<n;i++) b[i+1]+= b[i];
        int inm=0,ins=0,mom=1e9,son=0;
        for(int i=d;i<=n;i++)
        {
            int cur = a[i]-b[i-d];
            if(cur>son)
            {
                son = cur;
                ins = i-d+1;
            }
            if(cur<mom) 
            {
                mom = cur;
                inm = i-d+1;
            }
        }
        cout<<ins<<" "<<inm<<endl;
    }
    return 0;
}