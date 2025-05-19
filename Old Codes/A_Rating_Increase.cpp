#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s,s1,s2;
        cin>>s;
        s1+=s[0];
        for(int i=1;i<s.size();i++)
        {
            if(s[i] == '0')s1 += s[i];
            else
            {
                for(int j=i;j<s.size();j++)s2+=s[j];
                break;
            }
        }
        if(s2.empty() || stoi(s1) >= stoi(s2)) cout<<"-1\n";
        else cout<<s1<<" "<<s2<<endl;
    }

    return 0;
}