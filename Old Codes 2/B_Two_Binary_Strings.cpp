#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        string a,b;
        cin>>a>>b;
        bool f = false;
        for(int i=0;i<a.size()-1;i++){
            if(a[i] == '0' && b[i] == '0' && a[i+1]=='1'&& b[i+1]=='1'){
                f = true;
                break;
            }
        }  
        if(f) py
        else pn
    }
    return 0;
}