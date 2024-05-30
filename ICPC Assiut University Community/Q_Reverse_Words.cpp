#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    string s;
    getline(cin,s);
    stringstream ss(s);
    string a;
    while(ss>>a)
    {
        for(int i=a.size()-1;i>=0;i--) cout<<a[i];
        cout<<" ";
    }

    return 0;
}