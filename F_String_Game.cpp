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
    string s,b;
    cin>>s>>b;
    ll n=s.size(),x=b.size();
    vector <ll> v(n);
    for (auto& x:v){
        cin >>x; 
        x--;
    }
    auto ch=[&](ll d){
        vector<bool>a(n);
        f(i,0,d+1) a[v[i]]=true;
        ll j=0;
        forni{
            if(!a[i] && s[i]==b[j]){
                j++;
                if(j==x) return true;
            }
        }
        return false;
    };
    ll l=0,r=n-1,ans=-1,m;
    while(l<=r){
        m=(l+r)/2;
        if(ch(m)){
            ans=m;
            l=m+1;
        }
        else r=m-1;
    }
    co(ans+1)
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // ll t;
    // cin >> t;
    // while (t--)
    asikM();      
    return 0;
}