#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define forni for (int i = 0; i < n; i++)
#define fornj for (int j = 0; j < n; j++)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    multiset<ll>s;
    forni{
        ll x;
        cin>>x;
        s.insert(x);
    } 
    ll c=0,d=1;
    for(auto it:s){
        if(it>=d){
            c++;
            d++;
        }
    }
    cout<<c<<endl;
    return 0;
}