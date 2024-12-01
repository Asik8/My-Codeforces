#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define co(x1) cout<<x1<<"\n";
#define f(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define fr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define forni for(int i=0;i<n;i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int a,b;
        cin>>a>>b;
        int c=0;
        if(!((a-1)%4)) c=a-1;
        else if((a-1)%4==1) c=1;
        else if((a-1)%4==2) c=a;
        else c=0;
        if(c==b) co(a)
        else if((c^b) != a) co(a+1)
        else co(a+2)    
    }
    return 0;
}