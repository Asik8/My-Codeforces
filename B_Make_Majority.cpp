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
    string l;
    forni{
        if(s[i]=='0' && l.back()!='0') l+='0';
        else if(s[i]=='1') l+='1';
    }
    if(sz(l)>2){
        fl(i,0,sz(l)-2){
            if(l[i]=='1' && l[i+1]=='0' && l[i+2]=='1'){
                l[i]='1';
                l[i+1]='!';
                l[i+2]='!';
            } else if(l[i]=='0' && l[i+1]=='1' && l[i+2]=='1'){
                l[i]='1';
                l[i+1]='!';
                l[i+2]='!';
            } else if(l[i]=='1' && l[i+1]=='1' && l[i+2]=='0'){
                l[i]='1';
                l[i+1]='!';
                l[i+2]='!';
            }
        }
    }
    ll o=0,z=0;
    for(auto x:l){
        if(x=='1') o++;
        else if(x=='0') z++;
    }
    if(z<o) pys else pns
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