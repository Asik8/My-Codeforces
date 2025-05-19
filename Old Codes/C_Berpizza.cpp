#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,l=1;
    cin >> t;
    queue<ll>q;
    priority_queue<pair<ll,ll>>pq;
    unordered_set<ll> s;
    while(t--){
        ll n;
        cin >> n;
        if(n==1){
            ll x;
            cin>>x;
            q.push(l);
            pq.push({x,-l});
            l++;
        }
        else if(n==2){
            while(s.count(q.front())) q.pop();
            s.insert(q.front());
            cout<<q.front()<<" ";
            q.pop();
        }
        else if(n==3){
            while(s.count(-pq.top().second)) pq.pop();
            cout<<-pq.top().second<<" ";
            s.insert(-pq.top().second);
            pq.pop();
        }
    }
    cout<<endl;
    return 0;
}