#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define forni for (int i = 0; i < n; i++)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--){
        ll n,m;
        cin>>n>>m;
        ll nn=n-1,mm=m-1,l=0;
        vector<string>v(n),a;
        forni cin>>v[i];
        for(int i=0;i<min(n/2,m/2);i++){
            string s;
            for(int j=i;j<=mm;j++) s.pb(v[i][j]);
            for(int j=i+1;j<=nn;j++) s.pb(v[j][mm]);
            for(int j=mm-1;j>=i;j--) s.pb(v[nn][j]);
            for(int j=nn-1;j>i;j--) s.pb(v[j][i]);
            nn--;mm--;
            a.pb(s);
            s.clear();
        }
        ll c=0;
        for(auto &x:a){
            x.pb(x[0]);
            x.pb(x[1]);
            x.pb(x[2]);
            for(int i=0;i<x.size()-3;i++){
                if(x.substr(i,4) == "1543") c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}