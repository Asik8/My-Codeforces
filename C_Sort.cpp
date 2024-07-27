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
        ll n,q;
        cin>>n>>q;
        string s1,s2;
        cin>>s1>>s2;
        while(q--)
        {
            ll a,b;
            cin>>a>>b;
            vector <ll> v1(26,0),v2(26,0);
            for(int i=a-1;i<b;i++)
            {
                v1[s1[i]-'a']++;
                v2[s2[i]-'a']++;
            }
            ll c =0;
            for(int i=0;i<26;i++)
            {
                if(v1[i]!=v2[i]) c+= llabs(v1[i]-v2[i]);
            }
            cout<<c/2<<endl;
        }       
    }
    return 0;
}