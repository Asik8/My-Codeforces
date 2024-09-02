#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    bool f[3];
    memset(f,false,sizeof(f));
    int a,b;
    cin>>a>>b;
    f[a-1] = true;
    f[b-1] = true;
    for(int i=0;i<3;i++)
        if(!f[i]) cout<<i+1<<endl;
    return 0;
}