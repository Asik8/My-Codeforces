#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector <ll> v(31,0);
        for(int i=0;i<30;i++){
            if(1 & (n>>i)){
                if(v[i]){
                    v[i+1]=1;
                    v[i]=0;
                }
                else if(i>0){
                    if(v[i-1]==1){
                        v[i-1]=-1;
                        v[i+1]=1;
                    }
                    else v[i]=1;
                }
                else if(i==0) v[i]=1;
            }
        }
        cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
        cout<<endl;   
    }
    return 0;
}