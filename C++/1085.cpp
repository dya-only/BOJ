#include <iostream>
using namespace std;

int main() {

  int x, y, w, h;
  int xArr[4] = {}, yArr[4] = {};
  
  cin >> x >> y >> w >> h;  // x,y 는 점의 위치 | w,h는 직사각형의 크기

  // X, W, X축의 위치 비교
  int resX = x, resY = y;
  if ((w - x) < x) resX = w - x;
  if ((h - y) < y) resY = h - y;

  if (resX < resY) cout << resX;
  else cout << resY;
  
  return 0;
}