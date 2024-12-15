#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define forni for (int i = 0; i < n; i++)
#define fornj for (int j = 0; j < n; j++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        map<string,int>mp;
        vector<vector<string>> v(3);
        ll n;
        cin >> n;
        for(int i=0;i<3;i++){
            for(int j=0;j<n;j++){
                string s;
                cin>>s;
                mp[s]++;
                v[i].pb(s);
            }
        }   
        ll p1=0,p2=0,p3=0;
        for(int i=0;i<3;i++){
            for(int j=0;j<n;j++){
                int l = mp[v[i][j]];
                if(l==2){
                    if(i==0) p1++;
                    else if(i==1) p2++;
                    else if(i==2) p3++;
                }
                else if(l==1){
                    if(i==0) p1+=3;
                    else if(i==1) p2+=3;
                    else if(i==2) p3+=3;
                }
            }
        }    
        cout<<p1<<" "<<p2<<" "<<p3<<endl;
    }
    return 0;
}