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
        vector <vector<int>> v1(n,vector<int>(26,0));
        vector <vector<int>> v2(n,vector<int>(26,0));
        for(int i=0;i<n;i++)
        {
            if(i!=0) 
            {
                v1[i] = v1[i-1];
                v2[i] = v2[i-1];
            }
            v1[i][s1[i]-'a']++;
            v2[i][s2[i]-'a']++;
        }
        while(q--)
        {
            ll a,b;
            cin>>a>>b;
            ll ans=0,c1=0,c2=0;
            a--,b--;
            for(ll i=0;i<26;i++)
            {
                c1 = v1[b][i];
                if(a!=0) c1-= v1[a-1][i];
                c2 = v2[b][i];
                if(a!=0) c2-= v2[a-1][i];
                ans+= abs(c1-c2);
            }
            cout<<ans/2<<endl;
        }       
    }
    return 0;
}