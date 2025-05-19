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
        ll n,ans=0;
        cin >> n;
        string s;
        cin>>s;
        set<char> st;
        for(char c:s)
        {
            st.insert(c);
            ans+=st.size();
        }       
        cout<<ans<<endl;
    }
    return 0;
}