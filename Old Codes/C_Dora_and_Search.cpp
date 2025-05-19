#include <bits/stdc++.h>
using namespace std;
#define ll long long

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
        ll mn=1,mx = n,l=0,r=n-1;
        bool f=false;
        while(l<=r){
            if((v[l]==mn && v[r]==mx) || (v[l]==mx && v[r]==mn)){
                mn++;
                mx--;
                l++;
                r--;
            }
            else if(v[l]==mn){
                mn++;
                l++;
            }
            else if(v[r] == mn){
                mn++;
                r--;
            }
            else if(v[l]==mx){
                mx--;
                l++;
            }
            else if(v[r] == mx){
                mx--;
                r--;
            }
            else{
                cout<<l+1<<" "<<r+1<<endl;
                f=true;
                break;
            }
        }
        if(!f) cout<<"-1\n";
    }
    return 0;
}