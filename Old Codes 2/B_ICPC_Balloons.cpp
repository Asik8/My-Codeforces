#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ar[26] = {0};
        for (int i = 0; i < s.size(); i++)
            ar[s[i]-'A']++;
        int c= 0;
        for (int i = 0; i < 26; i++)
        {
            if(ar[i]>0)
            {
                c+=2+(ar[i]-1);
            }
        }
        cout<<c<<endl;
    }

    return 0;
}