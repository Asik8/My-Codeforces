#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n,k,e=0,o=0;
        cin >>n>>k;
        string s;
        cin>>s;
        vector<char> odd,even;
        for(int i=0;i<n;i++){
            if(!(i%2)) odd.pb(s[i]);
            else even.pb(s[i]);
        }
        if(!(k%2)){
            sort(s.begin(),s.end());
            cout<<s<<endl;
        }
        else {
            sort(odd.begin(),odd.end());
            sort(even.begin(),even.end());
            for(int i=0;i<n;i++){
                if(!(i%2)) cout<<odd[o++];
                else cout<<even[e++];
            }
            cout<<endl;
        }
    }
    return 0;
}