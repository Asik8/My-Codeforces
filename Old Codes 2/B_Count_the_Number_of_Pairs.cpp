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
    ll n,k,c=0,c1=0;
    cin >>n>>k;
    vector <ll> a(26,0),A(26,0);
    string s;
    cin>>s;
    for(auto x:s){
        if(x>='a' && x<='z') a[x-'a']++;
        else A[x-'A']++;
    }
    for(int i=0;i<26;i++){
        char ch1='a'+i,ch2='A'+i;
        // cout<<ch1<<" "<<ch2<<el;
        if(a[ch1-'a']>0){
            ll mn=min(a[ch1-'a'],A[ch2-'A']);
            c+=mn;
            a[ch1-'a']-=mn;
            A[ch2-'A']-=mn;
        }
        if(A[ch2-'A']>0){
            ll mn=min(a[ch1-'a'],A[ch2-'A']);
            c+=mn;
            a[ch1-'a']-=mn;
            A[ch2-'A']-=mn;
        }
    }
    for(int i=0;i<26;i++){
        char ch1='a'+i,ch2='A'+i;
        if(a[ch1-'a']>0){
            ll mn=min(a[ch1-'a']/2,k);
            if(mn>0 && k>0){
                k-=mn;
                c+=mn;
                a[ch1-'a']-=(mn*2);
            }
        }
        if(A[ch2-'A']>0){
            ll mn=min(A[ch2-'A']/2,k);
            if(mn>0 && k>0){
                k-=mn;
                c+=mn;
                A[ch2-'A']-=(mn*2);
            }
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