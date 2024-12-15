#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define forni for (int i = 0; i < n; i++)
#define fornj for (int j = 0; j < n; j++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<vector<int>> a(n,vector<int>(n));
        forni{
            fornj{
                cin>>a[i][j];
            }
        }    
        ll c=0;
        for(int col=0;col<n;col++){
            int i=0,j=col,mn=INT_MAX;
            while(i<n && j<n){
                mn = min(a[i][j],mn);
                i++;
                j++;
            }
            c+= abs(min(mn,0));
        }
        for(int row=1;row<n;row++){
            int i=row,j=0,mn=INT_MAX;
            while(i<n && j<n){
                mn = min(a[i][j],mn);
                i++;
                j++;
            }
            c+= abs(min(mn,0));
        }
        cout<<c<<endl;
    }
    return 0;
}