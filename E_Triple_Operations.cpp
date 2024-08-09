#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

inline int get_sum_digit(int n)
{
    int c = 0;
    while(n)
    {
        c++;
        n/=3;
    }
    return c;
}

int main() {
    int N = 2e5+20;
    int ctr[N],pref[N];
    for(int i=0;i<N-1;i++)
    {
        ctr[i] = get_sum_digit(i);
        pref[i+1] = pref[i]+ctr[i];
    }
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll l,r;
        cin>>l>>r;
        r++;
        ll s = pref[r]-pref[l];
        cout<<s+ctr[l]<<endl;
    }

    return 0;
}

