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
#define re(s){ co(s) return;}

void asikM(){
    ll n;
    cin >> n;
    string s;
    cin>>s;
    set<string>st;
    for(ll l=1;l<4;l++){
        for(int i=0;i+l<=n;i++){
            st.insert(s.substr(i,l));
        }
    }
    for(char i='a';i<='z';i++){
        string t1(1,i);
        if(!st.count(t1)) re(t1)
    }
    for(char i='a';i<='z';i++){
        string t1(1,i);
        if(!st.count(t1)) re(t1);
        for(char j='a';j<='z';j++){
            string t2=t1+j;
            if(!st.count(t2)) re(t2);
        }
    }
    for(char i='a';i<='z';i++){
        string t1(1,i);
        if(!st.count(t1)) re(t1);
        for(char j='a';j<='z';j++){
            string t2=t1+j;
            if(!st.count(t2)) re(t2);
            for(char k='a';k<='z';k++){
                string t3=t2+k;
                if(!st.count(t3)) re(t3);
            }
        }
    }
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