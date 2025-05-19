#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    vector<tuple<int,int,char>>a;
    int c = 0;
    for(int i=0;i<s.size();i++)
    {
        a.pb(make_tuple(c,-i,s[i]));
        if(s[i] == '(') c++;
        else c--;
    }
    sort(a.begin(),a.end());
    for(const auto& x:a) cout<<get<2>(x);
    cout<<endl;
    return 0;
}