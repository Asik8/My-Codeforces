#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define forni for (int i = 1; i < n; i++)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        string s;
        ll fe=0,le=0;
        bool f = false;  
        ll x;
        cin>>x;
        fe = x;
        le = x;
        s.pb('1');
        forni{
            cin>>x;
            if(!f && x>=le){
                le = x;
                s.pb('1');
            }
            else if(!f && x<le && x<=fe){
                f = true;
                le = x;
                s.pb('1');
            }
            else if(f && x>=le && x<=fe){
                le = x;
                s.pb('1');
            }
            else s.pb('0');
        }  
        cout<<s<<endl;
    }
    return 0;
}