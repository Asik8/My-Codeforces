#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n), ans;
        for (int i = 0; i < n; i++) cin >> v[i];
        if (is_sorted(v.begin(), v.end())) cout << "YES\n";
        else
        {
            int pre = 0;
            for (int i = 0; i < n; i++)
            {
                int l = v[i]/10;
                int r = v[i]%10;
                if(l>=pre && r>=l)
                {
                    pre = r;
                    ans.push_back(l);
                    ans.push_back(r);
                }
                else 
                {
                    ans.push_back(v[i]);
                    pre = v[i];
                }
            }
            if (is_sorted(ans.begin(),ans.end())) cout << "YES\n";
            else cout << "NO\n";
        }
    }

    return 0;
}