#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int compare(const void *a, const void *b) {
    return (*(ll*)a - *(ll*)b);
}

int main() {
    int a,b;
    cin>>a>>b;
    if(abs(a-b) == 1 || a==b && a>0 && b>0) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}