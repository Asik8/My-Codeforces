#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back

bool vowel(char c)
{
    if(c == 'a' || c=='e') return true;
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        string s,ans;
        cin>>s;
        for(int i = n-1;i>=0;)
        {
            if(vowel(s[i]))
            {
                ans+= s[i];
                ans+=s[i-1];
                ans+= '.';
                i-= 2;
            }
            else 
            {
                ans+= s[i];
                ans+=s[i-1];
                ans+=s[i-2];
                ans+= '.';
                i-= 3;
            }
        }
        reverse(ans.begin(),ans.end());
        for(int i=1;i<ans.size();i++) cout<<ans[i];
        cout<<endl;
    }

    return 0;
}