#include <bits/stdc++.h>
using namespace std;
// コンパイル g++ -o AAA AAA.cpp
// 実行 ./AAA

int main() {

  int N;
  cin >> N;
  int sum = 0;
  int average = 0;
  vector<int> A(N);
  for(int i=0; i<N; i++) {
    cin >> A.at(i);
  }
  for(int i=0; i<N; i++) {
    sum += A.at(i);
  }
  average = sum / N;
  for(int i=0; i<N; i++) {
    if (average > A[i]) {
      cout << average - A[i] << endl;
    } else {
      cout << A[i] - average << endl;
    }
  }

}