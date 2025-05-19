#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int n;
    cin >> n;
    ll ar[12];
    for (int i = 0; i < 12; i++)
        cin >> ar[i];
    sort(ar,ar+12,greater<int>());
    int sum =0,c=0 ;
    for(int i=0;i<12;i++) 
    {
        if(sum<n) 
        {
            c++;
            sum+=ar[i];
        }
        else break;
    }
    if(sum>=n) cout<<c<<endl;
    else cout<<-1<<endl;
    return 0;
}