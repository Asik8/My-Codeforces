#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<ll> v(n),ans;
    for (int i = 0; i < n; i++)
        cin >> v[i];

    ans.push_back(v[n-1]);
    for(int i=n-2;i>=0;i--)
    {
        bool f = false;
        for(int j=0;j<ans.size();j++)
        {
            if(ans[j] == v[i])
            {
                f = true;
                break;
            }
        }
        if(!f) ans.push_back(v[i]);
    }

    cout<<ans.size()<<endl;
    for(int j=ans.size()-1;j>=0;j--)
        cout<<ans[j]<<" ";
    cout<<endl;
    return 0;
}