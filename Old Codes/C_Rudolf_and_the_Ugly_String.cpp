#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        string s;
        cin>>s;
        ll c=0;
        for(int i=0;i<n-2;)
        {
            if(s[i] == 'm' && s[i+1] == 'a' && s[i+2] =='p')
            {
                i+=3;
                c++;
            }
            else if(s[i] == 'p' && s[i+1] == 'i' && s[i+2] =='e')
            {
                i+=3;
                c++;
            }
            else i++;
        }
        cout<<c<<endl;
    }

    return 0;
}