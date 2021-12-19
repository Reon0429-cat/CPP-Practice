#include <bits/stdc++.h>
using namespace std;
// コンパイル g++ -o AAA AAA.cpp
// 実行 ./AAA

int main() {

  int N;
  cin >> N;
  vector<int> math(N);
  vector<int> english(N);

  for (int i = 0; i < N; i++) {
    cin >> math.at(i);
  }

  for (int i = 0; i < N; i++) {
    cin >> english.at(i);
  }

  for (int i = 0; i < N; i++) {
    cout << math.at(i) + english.at(i) << endl;
  }

  // 要素の追加 push_back
  // 要素の削除 pop_back
  // vector<int> vec(3, 4) ... {4, 4, 4}

}