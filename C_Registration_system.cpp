#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int t;
    cin >> t;
    map<string,int>mp;
    while (t--){
        string s;
        cin>>s;
        if(mp[s] == 0){
            mp[s] = 1;
            cout<<"OK\n";
        }
        else{
            cout<<s<<mp[s]<<endl;
            mp[s]++;
        }    
    }
    return 0;
}