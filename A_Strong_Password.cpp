#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--){
        string s,c;
        cin>>s;
        bool f = false;
        for(int i=0;i<s.size()-1;i++){
            c.pb(s[i]);
            if(s[i] == s[i+1] && !f){
                f = true;
                if(s[i] == 'z') c.pb('a');
                else c.pb((s[i]+1));
            }
        }
        c.pb(s.back());
        if(!f){
            if(c.back() == 'z') c.pb('a');
            else c.pb((s.back()+1));
        }
        cout<<c<<endl;
    }
    return 0;
}