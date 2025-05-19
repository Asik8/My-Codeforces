#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n,m,l=0;
    cin>>n>>m;
    string s[n],t="vika";
    for(int i=0;i<n;i++) cin>>s[i];
    for(int i=0;i<m;i++) 
    {
        for(int j=0;j<n;j++)
        {
            if(s[j][i] == t[l])
            {
                l++;
                if (l == 4)
                {
                    cout<<"YES"<<endl;
                    return;
                } 
                break;
            }
        }
    }
    cout<<"NO"<<endl;
    return;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}