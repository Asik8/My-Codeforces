#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n,a,b;
        cin>>n>>a>>b;
        int l=0;
        for(int i=0;i<n;i++)
        {
            char c = 'a'+l;
            cout<<c;
            l++;
            if(l == b)
                l=0;
        }
        cout<<endl;
    }
    return 0;
}

     