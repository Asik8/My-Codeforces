#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
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
#define vec vector<ll>

void asikM(){
    ll n,a,b;
    cin >> n>>a>>b;
    vector <ll> v(n+1);
    vector<bool> ch(n+1,false);
    ll l=n;
    bool f= true;
    v[0]=a;
    ch[a]=true;
    f(i,1,n/2){
        if(l==b || l==a) l--;
        v[i]=l;
        ch[l]=true;
        l--;
    }
    l=1;
    f(i,n/2,n){
        while(ch[l]) l++;
        if(!ch[l]){
            v[i]=l;
            ch[l]=true;
            l++;
        }
    }
    ll mn=INT_MAX,mx=INT_MIN;
    // for(auto x:v) ct(x)
    // elc
    f(i,0,n/2){
        mn=min(mn,v[i]);
    }
    f(i,n/2,n){
        mx=max(v[i],mx);
    }
    if(mn!=a || mx!=b) f= false;
    if(f){
        forni ct(v[i])
        elc
    }
    else co(-1)
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