#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        ll ar[n],odd =0,even=0;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            if(ar[i]%2==0) even++;
            else odd ++;
        }
        if(n%2==1)cout<<-1<<endl;
        else 
        {
            if(odd ==n || even ==n) cout<<max(even,odd)/2<<endl;
            else cout<<max(even,odd)-min(even,odd)<<endl;
        }
    }

    return 0;
}