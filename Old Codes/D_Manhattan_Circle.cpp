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
        ll n,m;
        cin >> n>>m;
        char c[n][m];
        for (int i = 0; i < n; i++)
        {
            for(int j=0;j<m;j++) 
            {
                cin>>c[i][j];
            }
        }
        int cont = 0,row= 0, col =0;
        for (int i = 0; i < n; i++)
        {
            int co=0;
            for(int j=0;j<m;j++) 
            {
                if(c[i][j] == '#')co++;
                if(co>cont)
                {
                    cont=co;
                    row = i;
                    col = j;
                }
            }
        }   
        int f = cont/2;
        cout<<row+1<<" "<<col+1-f<<endl;
    }

    return 0;
}