#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forni for (int i = 0; i < n; i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,t;
    cin>>n>>t;
    if(t==10){
        if(n==1) cout<<"-1\n";
        else{
            for(int i=0;i<n-1;i++) cout<<"1";
            cout<<"0\n";
        }
    }
    else{
        forni cout<<t;
        cout<<endl;
    }
    return 0;
}