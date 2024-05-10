#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string a;
        cin >> a;

        bool f = false;
        for (int i = 0; i < a.length() - 1; i++) {
            if (a[i] != a[i + 1]) {
                f = true;
                char s = a[i];
                a[i] = a[i + 1];
                a[i + 1] = s;
                break; 
            }
        }

        if (!f)
            cout << "NO" << endl;
        else {
            cout << "YES" << endl;
            cout << a << endl;
        }
    }
    return 0;
}
