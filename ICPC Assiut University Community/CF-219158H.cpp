#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int a, b;
    cin >> a >> b;

    cout << "floor " << a << " / " << b << " = " << a / b << endl;
    cout << "ceil " << a << " / " << b << " = " << ceil(a /(float) b) << endl;
    cout << "round " << a << " / " << b << " = " << round(a / (float)b) << endl;
    return 0;
}
