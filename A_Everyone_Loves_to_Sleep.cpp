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
        ll n,h,m,ans = INT_MAX;
        cin >> n>>h>>m;
        while(n--)
        {
            int nh,nm,total=0;
            cin>>nh>>nm;
            int H = h,M= m;
            while(true)
            {
                if(H == nh && M == nm) break;
                total++;
                M++;
                if(M == 60)
                {
                    M=0;
                    H++;
                    if(H==24) H = 0;
                }
            }
            if(total<ans) ans = total;
        }   
        if(ans == 0) cout<<"0 0\n";
        else cout<<(ans/60)<<" "<<(ans%60)<<endl;    
    }

    return 0;
}