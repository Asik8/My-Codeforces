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
    string s1,s2;
    cin>>s1>>s2;
    ll cs1=0,cs2=0,us2=0,n=s1.size(),c=0;
    forni{
        if(s1[i]=='+') cs1++;
        if(s2[i]=='+') cs2++;
        if(s2[i]=='?') us2++;
    }
    for(int i=0;i<(1LL<<us2);i++){
        if(__builtin_popcount(i)+cs2 == cs1) c++;
    }
    cout<<fixed<<setprecision(12)<<(double)c/(1LL<<us2)<<endl;
    return 0;
}