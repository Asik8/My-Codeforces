#include <bits/stdc++.h>
using namespace std;

int main() {
    double n, k, a;
    cin >> n >> k >> a;

    double res = (n * k) / a;

    if (res != static_cast<int>(res)) {
        cout << "double\n";
    } 
    else if (res <= INT_MAX && res >= INT_MIN) {
        cout << "int\n";
    } 
    else {
        cout << "long long\n";
    }

    return 0;
}

