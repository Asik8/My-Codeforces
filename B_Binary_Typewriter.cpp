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
#define fl(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define flr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define flx(x1) for(auto x:x1) ct(x) elc
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
    ll c=0,in=0,f=0,l=0;
    while(l<n && s[l]=='0') l++;
    ll j=l;
    while(j<n){
        if(s[j]!='0') j++;
        else{
            ll ind=j,c=0;
            while(s[j]=='0'){
                j++;
                c++;
            }
            if(c>f){
                f=c;
                in=ind;
            }
        }
    }
    if(f>0) reverse(s.begin()+l,s.begin()+in+f);
    c=0,f=0;
    forni{
        if(s[i]=='1' && f==1) c++;
        else if(s[i]=='0' && f==0) c++;
        else if(s[i]=='0' && f==1){
            c+=2;
            f=0;
        }
        else if(s[i]=='1' && f==0){
            c+=2;
            f=1;
        }
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