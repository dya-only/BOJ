#include <iostream>
#include <string>
using namespace std;

int main() {

  int N = 0;
  string files[51] = {};

  cin >> N;
  
  for (int i = 0; i < N; i++) {
    cin >> files[i];
  }

  char cur;
  for (int j = 0; j < files[0].length(); j++) {
    cur = files[0][j];

    for (int k = 0; k < N; k++) {
      if (files[k][j] != cur) {
        cur = '?';
        break;
      }
    }
    cout << cur;
  }
  
  return 0;
}