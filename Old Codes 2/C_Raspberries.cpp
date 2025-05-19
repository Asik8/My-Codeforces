#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        int n,k;
        cin >> n>>k;
        int ans=k,c=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(!(x%2)) c++;
            if(!(x%k)) ans=0;
            ans = min(ans,k-x%k);
        }
        if(k==4){
            if(c>=2) ans = 0;
            else if(c==1) ans = min(ans,1);
            else ans = min(ans,2);
        }
        cout<<ans<<endl;  
    }
    return 0;
}