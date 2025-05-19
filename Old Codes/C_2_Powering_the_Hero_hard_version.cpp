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
        ll n,c=0;
        cin >> n;
        priority_queue<ll>pq;    
        forni{
            ll x;
            cin>>x;
            if(x==0 && !pq.empty()){
                c+=pq.top();
                pq.pop();
            }
            else pq.push(x);
        }
        cout<<c<<endl;
    }
    return 0;
}