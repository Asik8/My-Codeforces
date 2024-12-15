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
    ll n;
    cin >> n;
    deque <ll> v(n);
    for (auto& x:v) cin >>x;   
    ll s1=0,s2=0;
    bool f = true;
    while(!v.empty()){
        if(f){
            if(v.front()>=v.back()){
                s1+=v.front();
                v.pop_front();
            }
            else {
                s1+=v.back();
                v.pop_back();
            }
        }
        else{
            if(v.front()>=v.back()){
                s2+=v.front();
                v.pop_front();
            }
            else {
                s2+=v.back();
                v.pop_back();
            }
        }
        f = !f;
    }    
    cout<<s1<<" "<<s2<<endl;
    return 0;
}
