#include <iostream>
using namespace std;
double a, b, ans;
char ch;
int main() {
  cin >> a >> ch >> b;
  if (ch == '+') {
    cout << "=" << a + b << "\n";
  } else if (ch == '-') {
    cout << "=" << a - b << "\n";
  } else if (ch == '*') {
    cout << "=" << a * b << "\n";
  } else if (ch == '/') {
    if (b == 0) {
      cout << "除数不能为 0!\n";
      return 0;
    }
    cout << "=" << a / b << endl;
  } else if (ch == '%') {
    int a1 = (int)a, b1 = (int)b;
    cout << "=" << a1 % b1 << "\n";
  } else {
    cout << "非法运算符\n";
  }
  return 0;
}