#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int compare_desc(const void *a, const void *b) {
    int int_a = *((int *)a);
    int int_b = *((int *)b);

    if (int_a < int_b) {
        return 1;
    } else if (int_a > int_b) {
        return -1;
    } else {
        return 0;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        ll ans = 0;
        ans = n/10;
        if(n%10==9)
            ans++;
        cout<<ans<<endl;
    }

    return 0;
}