#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int sun = 0,sel = 0,r=0;

        if(a>c) sun++;
        else if(a<c) sel++;
        if(b>d) sun++;
        else if(b<d) sel++;
        if(sun>sel) r++;
        sun =0;
        sel = 0;
        
        if(a>d) sun++;
        else if(a<d) sel++;
        if(b>c) sun++;
        else if(b<c) sel++;
        if(sun>sel) r++;
        sun =0;
        sel = 0;
        
        if(b>d) sun++;
        else if(b<d) sel++;
        if(a>c) sun++;
        else if(a<c) sel++;
        if(sun>sel) r++;
        sun =0;
        sel = 0;
        
        if(b>c) sun++;
        else if(b<c) sel++;
        if(a>d) sun++;
        else if(a<d) sel++;
        if(sun>sel) r++;
        sun =0;
        sel = 0;
        
        cout<<r<<endl;
    }

    return 0;
}