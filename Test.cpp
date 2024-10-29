#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   pair<string, int> student = { "dablu", 10 };
   cout << student.first << " " << student.second << '\n';
   student.first = "bablu";
   for(auto[name, roll]:student)
      cout << name << " " << roll << '\n';
   return 0;
}