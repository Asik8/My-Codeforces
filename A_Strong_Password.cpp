#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        string s;
        cin>>s;
        char c;
        bool f = false;
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i] == s[i+1]) 
            {
                f = true;
                break;
            }
        }
        if(!f)
        {
            cout<<s;
            c = s.back();
            if(c == 'z') cout<<'a'<<endl;
            else 
            {
                c = c+1;
                cout<<c<<endl;
            }
        }
        else 
        {
            int i=0,d=0;
            for(i=0;i<s.size()-1;i++)
            {
                if(s[i] == s[i+1] && d==0) 
                {
                    cout<<s[i];
                    c = s[i];
                    if(s[i] == 'z') cout<<'a';
                    else cout<<char(c+1);
                    d++;
                }
                else cout<<s[i];
            }
            cout<<s[i]<<endl;
        }
    }
    return 0;
}