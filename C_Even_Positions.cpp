#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        string s;
        cin>>n>>s;
        int sum = 0;
        vector<int>op;
        for(int i=0;i<n;i++)
        {
            if(s[i] == '(') op.pb(i);
            else if(s[i] == ')')
            {
                sum+=i-op.back();
                op.pop_back();
            }
            else
            {
                if(op.size())
                {
                    sum+= i-op.back();
                    op.pop_back();
                }
                else op.pb(i);
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}