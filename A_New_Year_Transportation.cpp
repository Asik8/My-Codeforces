#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,x;
    cin >> n>>x;
    vector <ll> v(n+1);
    for (int i = 1; i < n+1; i++)
        cin >> v[i]; 
    int i=1;
    bool f = false;
    while(1)
    {
        i = i+v[i];
        if(i==x) 
        {
            f = true;
            break;
        }
        else if(i>x) break;
    }    
    if(f) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}