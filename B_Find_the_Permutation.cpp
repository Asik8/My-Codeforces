#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<pair<int, int>> degrees; // (degree, index)
    
    // Read adjacency matrix and calculate degrees
    for (int i = 0; i < n; ++i) {
        string row;
        cin >> row;
        int degree = count(row.begin(), row.end(), '1'); // Count 1's in the row
        degrees.push_back({degree, i});
    }
    
    // Sort nodes by degree
    sort(degrees.begin(), degrees.end());
    
    // Reconstruct permutation
    vector<int> permutation(n);
    for (int i = 0; i < n; ++i) {
        permutation[degrees[i].second] = i + 1; // Assign values from 1 to n
    }
    
    // Output the permutation
    for (int val : permutation) {
        cout << val << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
