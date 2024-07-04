#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    while (true)
    {
        int n,m;
        cin>>n>>m;
        if(m<=0 || n<=0) break;
        int a = min(n,m);
        int b = max(n,m);
        ll sum = 0;
        for(int i=a;i<=b;i++)
        {
            cout<<i<<" ";
            sum+=i;
        }
        cout<<"sum ="<<sum<<endl;
    }
    

    return 0;
}