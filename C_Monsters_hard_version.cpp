#include <bits/stdc++.h>

using namespace std;

int main() {
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    vector<int> mn(2 * n - 1);
    vector<int> add(2 * n - 1, 0);
    vector<int> pos(2 * n - 1);
    auto Pull = [&](int x, int z) {
      mn[x] = min(mn[x + 1], mn[z]) + add[x];
      pos[x] = (mn[x + 1] <= mn[z] ? pos[x + 1] : pos[z]);
    };
    function<void(int, int, int, int, int, int)> Modify = [&](int x, int l, int r, int ll, int rr, int v) {
      if (ll <= l && r <= rr) {
        mn[x] += v;
        add[x] += v;
        return;
      }
      int y = (l + r) >> 1;
      int z = x + 2 * (y - l + 1);
      if (ll <= y) {
        Modify(x + 1, l, y, ll, rr, v);
      }
      if (rr > y) {
        Modify(z, y + 1, r, ll, rr, v);
      }
      Pull(x, z);
    };
    function<void(int, int, int)> Build = [&](int x, int l, int r) {
      if (l == r) {
        mn[x] = l;
        pos[x] = l;
        return;
      }
      int y = (l + r) >> 1;
      int z = x + 2 * (y - l + 1);
      Build(x + 1, l, y);
      Build(z, y + 1, r);
      Pull(x, z);
    };
    Build(0, 1, n);
    long long s = 0;
    long long m = 0;
    for (int i = 0; i < n; i++) {
      s += a[i];
      m += 1;
      Modify(0, 1, n, a[i], n, -1);
      if (mn[0] < 0) {
        s -= pos[0];
        m -= 1;
        Modify(0, 1, n, pos[0], n, +1);
      }
      cout << s - m * (m + 1) / 2 << " \n"[i == n - 1];
    }
  }
  return 0;
}