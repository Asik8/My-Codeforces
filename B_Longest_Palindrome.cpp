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
    ll n,m;
    cin >> n>>m;
    vector<string>v(n);
    for (auto& x:v) cin >>x; 
    vec in;
    vector<bool>ch(n,false);
    for(int i=0;i<n-1;i++){
        string s=v[i];
        reverse(s.begin(),s.end());
        for(int j=i+1;j<n;j++){
            if(v[j]==s && !ch[j]){
                ch[i]=true;
                ch[j]=true;
                in.pb(i);
                in.pb(j);
                break;
            }
        }
    }
    auto check_Palin=[&](string t){
        string r=t;
        reverse(r.begin(),r.end());
        return r==t;
    };
    forni{
        if(!ch[i]){
            bool f=check_Palin(v[i]);
            if(f){
                in.pb(i);
                break;
            }
        }
    }
    if(sz(in)==0){
        co(0)
        return;
    }
    co(sz(in)*m)
    for(int i=0;i<sz(in);i+=2) cout<<v[in[i]];
    for(int i=sz(in)-1;i>0;i--) if(i%2) cout<<v[in[i]];
    cout<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // ll t;
    // cin >> t;
    // while (t--) {
        asikM();      
    return 0;
}