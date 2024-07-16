#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,d;
    cin >> n>>d;
    vector <ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];  
    ll c = 0,min=0;
    for(int i=0;i<n-1;i++)
    {
        min += v[i]+10;
        c+=2;
    }    
    min+= v[n-1];
    c+= abs(d-min)/5;
    if(min<=d) cout<<c<<endl;
    else cout<<-1<<endl;
    return 0;
}