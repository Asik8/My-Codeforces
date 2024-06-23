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
        ll n,k;
        cin >> n >>k;
        string s;
        cin>>s;
        int frq[26] = {0};
        for(char c:s)
        {
            frq[c-'a']++;
        }    
        int even = 0,odd=0;
        for(int i=0;i<26;i++)
        {
            if(frq[i]%2 == 0) even++;
            if(frq[i]%2 == 1) odd++;
        }  
        if(odd>0)odd--;
        if(odd<= k && k<=n) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}