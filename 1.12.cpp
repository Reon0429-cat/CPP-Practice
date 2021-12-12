#include "bits/stdc++.h"
using namespace std;

int main() {

  string str = "Hello";
  cout << str.size() << endl; // 5
  cout << str.at(2) << endl; // l

  // char型
  char c = 'a'; // ''で囲む
  
  string str2;
  cin >> str2;
  int count = 0;
  for (int i = 0; i < str2.size(); i++) {
    if (str2.at(i) == 'o') {
      break;
    }
    count++;
  }
  cout << count << endl;
  
  string a;
  getline(cin, a); // 変数aで入力を一行受け取る


}