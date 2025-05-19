#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--) {
        string s1,s2;
        cin>>s1>>s2;
        cout<<s2[0]<<s1[1]<<s1[2];
        cout<<" "<<s1[0]<<s2[1]<<s2[2]<<endl;
    }

    return 0;
}