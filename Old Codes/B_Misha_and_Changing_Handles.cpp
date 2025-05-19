#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    map<string,string>ans,has;
    while (t--) {
        string s1,s2;
        cin>>s1>>s2;
        if(has.find(s1) != has.end()){
            string s = has[s1];
            ans[s] = s2;
            has.erase(s1);
            has[s2] = s;
        }
        else{
            ans[s1] = s2;
            has[s2] = s1;
        }
    }
    cout<<ans.size()<<endl;
    for(auto c:ans) cout<<c.first<<" "<<c.second<<endl;
    return 0;
}