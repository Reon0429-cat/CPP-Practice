#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A;
  cin >> N >> A;
  for (int i = 0; i < N; i++) {
    string op;
    int B;
    cin >> op >> B;
    int C;
    if (op == "+") {
      C = A + B;
    } else if (op == "-") {
      C = A - B;
    } else if (op == "*") {
      C = A * B;
    } else if (op == "/") {
      if (B == 0) {
        cout << "error" << endl;
        break;
      } else {
        C = A / B;
      }
    }
    cout << i + 1 << ":" << C << endl;
    A = C;
  }
}