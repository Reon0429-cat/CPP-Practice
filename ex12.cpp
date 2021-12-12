#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  // 1+1-1+1+1
  int sum = 1;
  for (int i = 0; i < S.size(); i++) {
    if (S.at(i) == '+') {
      sum += 1;
    } else if (S.at(i) == '-') {
      sum -= 1;
    }
  }
  cout << sum << endl;
}