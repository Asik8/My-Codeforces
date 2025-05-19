#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pbs insert
#define pi pair<ll,ll>
#define py cout<<"YES\n";
#define pys cout<<"Yes\n";
#define pn cout<<"NO\n";
#define pns cout<<"No\n";
#define co(x1) cout<<x1<<"\n";
#define ct(x1) cout<<x1<<" ";
#define elc cout<<"\n";
#define el "\n";
#define f(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define fr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define forni for(int i=0;i<n;i++)
#define all(x1) x1.begin(),x1.end()
#define allr(x1) x1.rbegin(),x1.rend()
#define sz(x) x.size()
#define vec(x) vector<x>

void asikM(){
    ll n;
    cin >> n;
    string s;
    cin>>s;
    ll c=0;
    for(int i=n-1;i>=0;){
        if(s[i]=='0' && s[i-1]=='1'){
            ll l=1,j=i-1;
            while(j>=0 && s[j]=='1'){
                l++;
                j--;
            }
            // co(l)
            i-=l;
            c+=2;
        }
        else if(s[i]=='1'){
            ll l=1,j=i-1;
            while(j>=0 && s[j]=='1'){
                l++;
                j--;
            }
            // co(l)
            i-=l;
            c++;
        }
        else i--;
    }
    co(c)
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    cin >> t;
    while (t--)
    asikM();      
    return 0;
}