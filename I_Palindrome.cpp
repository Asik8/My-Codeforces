#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    string s;
    cin>>s;

    int l = 0,r = s.size()-1;
    bool palin = true;
    while(l<r)
    {
        if(s[l] != s[r])
        {
            palin = false;
            break;
        }
        else
        {
            l++;
            r--;
        }
    }
    int a = s.size()-1;
    while(a>0)
    {
        if(s[a] == '0') a--;
        else break;
    }
    for(int i=a;i>=0;i--)
    {
        cout<<s[i];
    }
    if(palin) cout<<endl<<"YES\n";
    else cout<<endl<<"NO\n";
    
    return 0;
}