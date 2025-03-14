#include <bits/stdc++.h>
using namespace std;

const int maxN = 1e5 + 9;
int a[maxN];

struct node {
   int gcd; 
};
node t[maxN * 4];
int computeGCD(int a, int b) {
   return b == 0 ? a : computeGCD(b, a % b);
}
node merge(node l, node r) {
   node ans;
   ans.gcd = computeGCD(l.gcd, r.gcd); 
   return ans;
}
void build(int n, int b, int e) {
   if (b == e) {
      t[n].gcd = a[b];
      return;
   }
   int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
   build(l, b, mid);
   build(r, mid + 1, e);
   t[n] = merge(t[l], t[r]); 
}
node query(int n, int b, int e, int i, int j) {
   if (e < i || j < b) {
      return {0}; 
   }
   if (b >= i && e <= j) {
      return t[n]; 
   }
   int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
   return merge(query(l, b, mid, i, j), query(r, mid + 1, e, i, j)); // Merge results from left and right children
}
int shortestGoodSegment(int n) {
   build(1, 1, n);

   if (query(1, 1, n, 1, n).gcd != 1) {
      return -1;
   }

   int left = 1, minLength = n;

   for (int right = 1; right <= n; right++) {
      while (left <= right && query(1, 1, n, left, right).gcd == 1) {
         minLength = min(minLength, right - left + 1);
         left++;
      }
   }
   return minLength;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n;
   cin >> n;
   for (int i = 1; i <= n; i++) {
      cin >> a[i];
   }
   int result = shortestGoodSegment(n);
   cout << result << '\n';
   return 0;
}