#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int t;
    cin >> t;
    map<string,int>reg;
    while (t--) {
        string s;
        cin>>s;
        if(reg[s] == 0)
        {
            reg[s] = 1;
            cout<<"OK\n";
        }
        else
        {
            cout<<s<<reg[s]<<endl;
            reg[s]++;
        }    
    }
    return 0;
}