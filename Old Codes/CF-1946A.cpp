#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int compare_asc(const void *a, const void *b) {
    ll ll_a = *((ll *)a);
    ll ll_b = *((ll *)b);

    if (ll_a > ll_b) {
        return 1;
    } else if (ll_a < ll_b) {
        return -1;
    } else {
        return 0;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        ll ar[n];
        for (int i = 0; i < n; i++)
            cin >> ar[i];
        qsort(ar, n, sizeof(ll), compare_asc);
        int in = (n-1)/2;
        int m = ar[in], c = 0;
        for (int i = in; i < n; i++) if(ar[i] == m) c++;
        cout << c << endl;
    }

    return 0;
}
