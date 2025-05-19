#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define co(x1) cout<<x1<<"\n";
#define f(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define fr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define forni for(int i=0;i<n;i++)
#define sz(x) x.size()
#define vec vector<ll>

void asikM(){
    ll n;
    cin >> n;
    multiset<ll>s;
    vec v;
    forni{
        ll x;
        cin>>x;
        v.pb(x);
    } 
    sort(v.begin(),v.end());
    for(int i=0;i<n-1;i++) s.insert(v[i+1]-v[i]);
    ll c;
    for(int i=0;i<n-1;i++){
        if(v[i]==v[i+1]){
            c=v[i];
            s.erase(s.find(0));
            if(i>0) s.erase(s.find(v[i]-v[i-1]));
            if(i+2<n) s.erase(s.find(v[i+2]-v[i+1]));
            if(!s.empty() && *s.begin()<2*c){
                for(ll j=0;j<n;j++){
                    if(v[j+1]-v[j]<2*c && (j+1<i || i+1<j)){
                        cout<<v[j]<<" "<<v[j+1]<<" "<<c<<" "<<c<<endl;
                        return;
                    }
                }
            }
            if(i>0 && i+2<n && v[i+2]-v[i-1]<2*c){
                cout<<v[i-1]<<" "<<v[i+2]<<" "<<c<<" "<<c<<endl;
                return;
            }
            s.insert(0);
            if(i>0) s.insert(v[i]-v[i-1]);
            if(i+2<n) s.insert(v[i+2]-v[i+1]);
        }
    }
    co(-1)
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    asikM();      
    return 0;
}