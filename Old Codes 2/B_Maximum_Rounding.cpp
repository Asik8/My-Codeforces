#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        string s;
        cin>>s;
        ll co=-1,n=s.size()-1;
        for(int i=n;i>0;i--){
            if((s[i]-'0')>=5){
                if(s[i-1] !=9){
                    s[i-1]++;
                    co = i;
                }
            }
        }
        if(s[0]>='5'){
            cout<<1;
            for(int i=0;i<=n;i++) cout<<"0";
            cout<<endl;
        }
        else{
            if(n>0 && co!=-1) for(int i=co;i<=n;i++) s[i] = '0';
            cout<<s<<endl;
        }
    }        
    return 0;
}