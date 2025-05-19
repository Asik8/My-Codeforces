#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<pair<string,int>> v;
    ll t;
    cin >> t;
    while (t--) {
        string s;
        cin>>s;
        if(v.size() == 0) v.pb(make_pair(s,0));
        else
        {
            bool f = false;
            for(int i=0;i<v.size();i++)
            {
                if(v[i].first == s) 
                {
                    v[i].second++;
                    f = true;
                    break;
                }
            }
            if(!f) v.pb(make_pair(s,0));
        }
    }

    int m = INT_MIN;
    for(int i=0;i<v.size();i++)
        if(v[i].second>m) m = v[i].second;

    for(int i=0;i<v.size();i++)
    {
        if(v[i].second==m)
        {
            cout<<v[i].first<<endl;
            break;
        }
    }
    return 0;
}