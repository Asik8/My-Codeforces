#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define f(x1,x2,x3) for(int x1=x2;x1<x3;x1++)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--){
        string a,b;
        cin>>a>>b;
        if(a==b)cout<<"=\n";
        else if(a.back()=='S' && b.back()=='S'){
            if(a.size()<b.size()) cout<<">\n";
            if(a.size()>b.size()) cout<<"<\n";
        }
        else if(a.back()=='L' && b.back()=='L'){
            if(a.size()<b.size()) cout<<"<\n";
            if(a.size()>b.size()) cout<<">\n";
        }
        else if(a.back()=='L' && b.back()=='S') cout<<">\n";
        else if(a.back()=='S' && b.back()=='L') cout<<"<\n";
        else if(a.back()=='S' && b.back()=='M') cout<<"<\n";
        else if(a.back()=='M' && b.back()=='S') cout<<">\n";
        else if(a.back()=='M' && b.back()=='L') cout<<"<\n";
        else if(a.back()=='L' && b.back()=='M') cout<<">\n";
    }
    return 0;
}
