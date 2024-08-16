#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define forni for (int i = 0; i < n; i++)
#define fornj for (int j = 0; j < n; j++)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    string s;
    cin >> s;
    vector<int> coeff(n, n + 1);
    {
      int cnt = 0;
      for (int i = 0; i < n; i++) {
        cnt += (s[i] == 'L');
        coeff[i] = min(coeff[i], cnt);
      }
    }
    {
      int cnt = 0;
      for (int i = n - 1; i >= 0; i--) {
        cnt += (s[i] == 'R');
        coeff[i] = min(coeff[i], cnt);
      }
    }
    int64_t ans = 0;
    for (int i = 0; i < n; i++) {
      ans += int64_t(coeff[i]) * a[i];
    }
    cout << ans << '\n';
  }
  return 0;
}