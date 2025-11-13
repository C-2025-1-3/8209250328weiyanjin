#include <iostream>
#define int long long
using namespace std;
signed main() {
  int a, b, c;
  cin >> a >> b >> c;
  if (a + b > c && a + c > b && b + c > a) {
    cout << "周长=" << a + b + c << "\n";
    if (a == b || b == c || c == a) {
      cout << "等腰三角形\n";
    }else{
        cout<<"不是等腰三角形\n";
    }
  } else {
    cout << "不是三角形\n";
  }
  return 0;
}
//3 4 5
//