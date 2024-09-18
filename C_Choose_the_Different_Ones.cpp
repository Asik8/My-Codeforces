#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
const ll N = 2e5+20;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n,m,k;
        cin>>n>>m>>k;
        vector <ll> v1(n),v2(m),q;
        for (auto& x:v1) cin >>x;       
        for (auto& x:v2) cin >>x;  
        ll lim = k/2;
        ll a[k+1],b[k+1],ans[k+1];  
        memset(a,0,sizeof(a));   
        memset(b,0,sizeof(b));   
        memset(ans,0,sizeof(ans)); 
        for(int i=0;i<n;i++)  
        {
            if(v1[i]>=1 && v1[i]<=k) a[v1[i]] = 1;
        }
        for(int i=0;i<m;i++)  
        {
            if(v2[i]>=1 && v2[i]<=k) b[v2[i]] = 1;
        }
        ll n_c = 0,m_c= 0;
        for(int i=1;i<=k;i++)
        {
            if(a[i] == 1 && b[i] == 1) q.pb(i);
            else if(a[i] == 0 && b[i] == 0) continue;
            else 
            {
                if(a[i] == 1 && n_c<lim) 
                {
                    ans[i] = 1;
                    n_c++;
                }
                else if(b[i] == 1 && m_c<lim) 
                {
                    ans[i] = 1;
                    m_c++;
                }
            }
        }
        for(ll x:q)
        {
            if(n_c<lim) 
            {
                ans[x] = 1;
                n_c++;
            }
            else if(m_c<lim) 
            {
                ans[x] = 1;
                m_c++;
            }
        }
        bool f = true;
        for(int i=1;i<=k;i++)
        {
            if(ans[i] == 0) 
            {
                f = false;
                break;
            }
        }
        if(f) py
        else pn
    }
    return 0;
}