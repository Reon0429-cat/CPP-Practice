#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, a, b;
  cin >> x >> a >> b;
  x++;
  cout << x << endl;
  cout << x * (a + b) << endl;
  cout << x * (a + b) * x * (a + b) << endl;
  cout << x * (a + b) * x * (a + b) - 1 << endl;
}
