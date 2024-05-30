#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    string s;
    getline(cin,s);
    stringstream ss(s);
    string a;
    ll c=0,i=0;
    while(ss>>a)
    {
        if(a[i]>='A' && a[i]<='Z' || a[i]>='a' && a[i]<='z')c++;
    }
    cout<<c<<endl;
    return 0;
}