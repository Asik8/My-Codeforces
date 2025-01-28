#include <bits/stdc++.h>
using namespace std;

int main()
{
  map<int, int> mp;
  mp[1]++;
  mp[2]++;
  mp[3]++;
  mp[1]++;
  mp[2]++;
  mp[3]++;
  mp[4]++;
  mp[2]++;
  mp[3]++;
  mp[4]++;
  mp[4]++;
  mp[4]++; 
  mp[4]++;
  mp[1]++;
  mp[2]++;
  mp[3]++;
  mp[4]++;
  for (auto [x, y] : mp)
    cout << x << " " << y << endl;
}
