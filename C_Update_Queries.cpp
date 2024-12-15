#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back
#define sz 1000020

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    pair<int,int>p[sz];
    int cnt[sz];
    ll t;
    cin >> t;
    while (t--) {
        ll n,m;
        cin >> n>>m;
        for(int i=0;i<=n;i++) cnt[i] = 0;
        string s,c;
        cin>>s;
        vector <int> ind(m);
        for(int i=0;i<m;i++)
        {
            cin>>ind[i];
            ind[i]--;
            p[i] = {cnt[ind[i]]++,ind[i]};
        }
        cin>>c;
        sort(c.begin(),c.end());
        sort(p,p+m);
        for(int i=m-1;i>=0;i--) s[p[i].second] = c[i];
        cout<<s<<endl;
    }
    return 0;
}