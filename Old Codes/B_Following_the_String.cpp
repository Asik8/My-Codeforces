#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        ll ar[n];
        for (int i = 0; i < n; i++)
            cin >> ar[i];
        int fre[26] = {0};
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<26;j++)
            {
                if(ar[i] == fre[j])
                {
                    char c = j+'a';
                    cout<<c;
                    fre[j]++;
                    break;
                }
            }
        }
        cout<<endl;
    }

    return 0;
}