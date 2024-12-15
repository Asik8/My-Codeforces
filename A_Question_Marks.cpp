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
        ll n;
        cin >> n;
        string s;
        cin>>s;
        int freq[5] = {0};
        for(char c:s)
        {
            if(c == '?') freq[4]++;
            else{
                freq[c-'A']++;
            }
        }
        // for(int i=0;i<5;i++) cout<<freq[i]<<" ";cout<<endl;
        ll c=0;
        for(int i=0;i<4;i++)
        {
            if(freq[i] < n) c+=freq[i];
            else c+=n;
        }
        cout<<c<<endl;
    }
    return 0;
}