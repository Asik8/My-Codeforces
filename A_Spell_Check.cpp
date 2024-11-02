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
    ll t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        string s;
        cin>>s;
        if(s.size()>5)pn
        else{
            int a[5] ={0};
            for(char c:s){
                if(c=='T') a[0]++;
                else if(c=='i') a[1]++;
                else if(c=='m') a[2]++;
                else if(c=='u') a[3]++;
                else if(c=='r') a[4]++;
            }
            bool f = true;
            for(int i=0;i<5;i++){
                if(a[i] < 1){
                    f=false;
                    break;
                }
            }       
            if(f) py
            else pn
        }
    }
    return 0;
}