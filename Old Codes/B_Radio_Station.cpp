// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define pb push_back
// #define py cout<<"YES\n";
// #define pn cout<<"NO\n";
// #define forni for (int i = 0; i < n; i++)
// #define fornj for (int j = 0; j < m; j++)

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll n,m;
//     cin>>n>>m;
//     map<string,string> has;
//     forni{
//         string s1,s2;
//         cin>>s1>>s2;
//         has[s2] = s1;
//     }
//     fornj{
//         string s1,s2;
//         cin>>s1>>s2;
//         s2.pop_back();
//         cout<<s1<<" "<<s2<<"; #"<<has[s2]<<endl;
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define forni for (int i = 0; i < n; i++)
#define fornj for (int j = 0; j < n; j++)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m;
    cin>>n>>m;
    ll l = n+m;
    vector<pair<string,string>>v;
    map<string,string>has;
    while(l--){
        string s1,s2;
        cin>>s1>>s2;
        v.pb({s1,s2});
        if(s2.back() != ';')
            has[s2] = s1;
    }
    vector<tuple<string,string,string>> tp;
    for(int i=v.size()-1;i>=0;i--){
        string s = has[v[i].second];
        if(s != v[i].first){
            tp.pb({v[i].first,v[i].second,s});
        }
    }
    for(auto x:tp){
        auto[a,b,c] = x;
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    return 0;
} 