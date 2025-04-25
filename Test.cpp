#include<bits/stdc++.h>
#define int long long int
#define ll long long
#define mod 1000000007
#define endl "\n"

using namespace std;
int ts=1;
// start journey

const int N = 2e5+10;

int cnt(string ch){
    int ans = 0;
    for(auto p : ch){
        if(p == '1') ans++;
    }
    return ans;
}

void solve(){
    int n; cin >> n;
    string ch;
    cin >> ch;
    int ans = 0;
    for(int i = 0; i < n; i++){
        string tmp = ch;
        if(tmp[i] == '0') tmp[i] = '1';
        else tmp[i] = '0';
        cout<<tmp<<" "<<ans<<'\n';
        ans += cnt(tmp);
    }
    cout << ans << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    cin >> t;
    while(t--){
        solve();
    }
}