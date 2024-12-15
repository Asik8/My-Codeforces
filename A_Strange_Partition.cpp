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
        ll n,x;
        cin >> n>>x;
        ll sum = 0,a1=0,a2,num;
        for (int i = 0; i < n; i++)
        {
            cin >> num; 
            sum+= num;
            a1+=num/x;
            if(num%x) a1++;
        }   
        a2 = sum/x;
        if(sum%x) a2++;
        cout<<a2<<" "<<a1<<endl;
    }
    return 0;
}