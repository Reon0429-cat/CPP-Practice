#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
  int a_i = 0;
  string a_t;
  int b_i = 0;
  string b_t;
  while (a_i<A) {
    a_t += "]";
    a_i++;
  }
  while (b_i<B) {
    b_t += "]";
    b_i++;
  }
  cout << "A:" + a_t << endl;
  cout << "B:" + b_t << endl;
}