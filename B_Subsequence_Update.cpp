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
    ll n,l,r;
    cin>>n>>l>>r;
    vector <ll> v(n);
    for (auto& x:v) cin >>x; 
    l--;r--;
    ll s=0,mx=LLONG_MIN,s1=0,s2=0,mx_in=-1;
    for(int i=l;i<=r;i++){
        s+=v[i];
        if(v[i]>mx){
            mx=max(mx,v[i]);
            mx_in=i;
        }
    }
    ll in1=-1,in2=-1;
    if(l==0 && r==n-1){
        co(s)
        return;
    }
    if(l>0){
        ll mx1=mx;
        for(int i=l-1;i>=0;i--){
            if(v[i]<mx1){
                in1=i;
                mx1=v[i];
            }
        }
        vec a=v;
        if(in1 !=-1)reverse(a.begin()+in1,a.begin()+mx_in+1);
        for(auto x:a) cout<<x<<" ";
        cout<<endl;
        a.clear();
    }
    if(r<n-1){
        ll mx2=mx;
        for(int i=r+1;i<n;i++){
            if(v[i]<mx2){
                in2=i;
                mx2=v[i];
            }
        }
        vec a=v;
        if(in2 !=-1)reverse(a.begin()+mx_in,a.begin()+in2+1);
        for(auto x:a) cout<<x<<" ";
        cout<<endl;
    }
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