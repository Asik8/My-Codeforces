#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pbk push_back
#define ins insert
#define pi pair<ll,ll>
#define py cout<<"YES\n";
#define pys cout<<"Yes\n";
#define pn cout<<"NO\n";
#define pns cout<<"No\n";
#define co(x1) cout<<x1<<"\n";
#define ct(x1) cout<<x1<<" ";
#define elc cout<<"\n";
#define el "\n";
#define fl(x1,x2,x3,x4) for(int x1=x2;x1<x3;x1+=x4)
#define flr(x1,x2,x3,x4) for(int x1=x2;x1>=x3;x1-=x4)
#define flx(x1) for(auto x:x1) ct(x) elc
#define acv(x1,x) for(auto x:x1)
#define acp(x1,x,y) for(auto [x,y]:x1)
#define forni for(int i=0;i<n;i++)
#define all(x1) x1.begin(),x1.end()
#define allr(x1) x1.rbegin(),x1.rend()
#define sz(x) x.size()
#define vec(x) vector<x>

void asikM(){
    ll n;
    cin>>n;
    vector<ll>a(n),b(n);
    forni cin>>a[i]; 
    forni cin>>b[i]; 
    sort(allr(a));
    sort(allr(b));
    fl(i,1,n,1){
        a[i]+=a[i-1];
        b[i]+=b[i-1];
    }
    ll l=(n-(n/4))-1,r=l,s=0,c=n;
    if(a[l]>=b[r]){
        co(0)
        return;
    }
    while(s+a[l]<b[r]){
        s+=100;
        c++;
        if(!(c%4)){
            if(l>0) l--;
            else{
                a[0]=0;
                l=0;
            }
        } else if(r!=n-1) r++;
    }
    co(c-n)
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--)
    asikM();      
    return 0;
}