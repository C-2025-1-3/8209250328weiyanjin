#include <iostream>
using namespace std;
double a, b, ans;
char ch;
int main() {
  cin >> a >> ch >> b;
  switch (ch) {
    case '+': {
      cout <<" "<< a + b;
      break;
    }
    case '-': {
      cout <<" "<< a - b;
      break;
    }
    case '*': {
      cout <<" "<< a * b;
      break;
    }
    case '/': {
      if (b != 0)
        cout <<" "<< a / b;
      else
        cout << "0 不能做除数";
      break;
    }
    case '%': {
      int a1 = (int)a, b1 = (int)b;
      if ((double)a1 == a && (double)b1 == b) {
        if (b1 != 0)
          cout <<" "<< a1 % b1;
        else
          cout << "0 不能做除数";
      } else {
        cout << "小数不能取余";
      }
      break;
    }
    default: {
      cout << "非法运算符" << endl;
      break;
    }
  }
  return 0;
}
//