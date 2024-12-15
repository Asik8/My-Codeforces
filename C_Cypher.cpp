#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define forni for (int i = 0; i < n; i++)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        vector <ll> v(n);
        for (auto& x:v) cin >>x;
        forni{
            ll l;
            string s;
            cin>>l>>s;
            for(int j=0;j<l;j++){
                if(s[j]=='U'){
                    v[i]--;
                    if(v[i] == -1) v[i]=9;
                }
                else if(s[j]=='D'){
                    v[i]++;
                    if(v[i] == 10) v[i]=0;
                }
            }
        }   
        for(auto x:v) cout<<x<<" ";
        cout<<endl;    
    }
    return 0;
}