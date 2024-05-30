#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int x,n;
    cin>>x>>n;
    int sum = 0;
    for (int i=2;i<n;i+=2) sum+=pow(x,i);
    cout<<sum<<endl;
    return 0;
}