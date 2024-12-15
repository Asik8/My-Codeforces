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
        ll n,m,b=0,w=0;
        cin>>n>>m;
        char c[n][m];
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                cin>>c[i][j];
        if(c[0][0] == c[n-1][m-1] || c[0][m-1] == c[n-1][0]) cout<<"YES\n";
        else
        {
            int r1=0,r2=0,r3=0,r4=0,c1=0,c2=0,c3=0,c4=0;
            for(int i=0;i<m;i++)
            {
                if(c[0][0] != c[0][i]) r1 =1;
                if(c[n-1][0] != c[n-1][i]) r2 =1;
                if(c[0][m-1] != c[0][i]) r3 =1;
                if(c[n-1][m-1] != c[n-1][i]) r4 =1;
            }
            for(int i=0;i<n;i++)
            {
                if(c[0][0] != c[i][0]) c1++;
                if(c[n-1][0] != c[i][0]) c2++;
                if(c[0][m-1] != c[i][m-1]) c3++;
                if(c[n-1][m-1] != c[i][m-1]) c4++;
            }
            if((r1==1 && c1>0) || (r2==1 && c2>0) || (r3==1 && c3>0) || (r4==1 && c4>0)) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }

    return 0;
}