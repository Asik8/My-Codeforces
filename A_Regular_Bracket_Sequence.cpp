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
    string s,s1="()",s2=")(";
    cin>>s;
    ll c=count(all(s),'?'),l=0,r=0;
    while(l<sz(s)){
        if(s[l]==s1[r]) r++;
        if(r==2) break;
        l++;
    }
    if(!(c&1) && r==2){
        py 
        return;
    }
    if(s[0]==')' || s.back()=='('){
        pn
        return;
    }
    l=0,c=0;
    ll fb=0,sb=0;
    while(l<sz(s)){
        if(s[l]=='?') c++;
        else if(s[l]=='(') fb++;
        else{
            if(fb>0) fb--;
            else if(fb==0 && c>0) c--;
            else{
                pn
                return;
            }
        }
        l++;
    }
    // cout<<fb<<' '<<sb<<" "<<c<<el
    if(fb>0){
        if(sb>0){
            ll x=min(fb,sb);
            fb-=x;
            sb-=x;
        } else{
            ll x=min(fb,c);
            fb-=x;
            c-=x;
        }   
    }
    if(!(c&1)) c=0;
    // cout<<fb<<' '<<sb<<" "<<c<<el
    if(fb==0 && sb==0 && c==0)py else pn
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