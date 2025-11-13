#include <iostream>
using namespace std;
const double acc = 0.00005;
int a;
int main() {
  cin >> a;
  double xn = a, xl = 0;
  if (a < 0) {
    cout << "负数不能开方";
    return 0;
  } else if (a == 0) {
    cout << 0;
    return 0;
  }
  while (abs(xl - xn) >= acc) {
    xl = xn;
    xn = 0.5 * (xl + a / xl);
  }
  cout << xn << endl;
  return 0;
}
/*
#include <iomanip>
#include <iostream>
using namespace std;
const double acc = 0.0000000005;
int a;
int main() {
  cin >> a;
  double xn = a, xl = 0;
  if (a < 0) {
    cout << "负数不能开方";
    return 0;
  } else if (a == 0) {
    cout << 0;
    return 0;
  }
  while (abs(xl - xn) >= acc) {
    xl = xn;
    xn = 0.5 * (xl + a / xl);
  }
  cout <<fixed<<setprecision(10)<< xn << endl;
  return 0;
}
*/