#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        vector<int> prefix(n + 1, 0);
        for (int i = 0; i < n; ++i) {
            prefix[i + 1] = prefix[i] + (s[i] == '0' ? 1 : 0);
        }
        int mx = 1;
        for (int i = 0; i < n; ++i) {
            if (s[i] != '0') {
                int z = prefix[i];
                int c = z + 1;
                if (c > mx) {
                    mx = c;
                }
            }
        }
        cout << n - mx << endl;
    }
    return 0;
}