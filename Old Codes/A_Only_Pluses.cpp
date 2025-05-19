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
        vector<int> v(3);
        for(int i=0;i<3;i++)
            cin>>v[i];
            sort(v.begin(),v.end());
        for(int i=0;i<5;i++)
        {
            v[0]++;
            sort(v.begin(),v.end());
        }
        cout<<v[0]*v[1]*v[2]<<endl;
    }
    return 0;
}