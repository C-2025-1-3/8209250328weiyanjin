#include <iostream>
using namespace std;
int a, b, c, d, e;
int main() {
  char ch;
  while ((ch = getchar()) != '\n') {
    if (ch == ' ') {
      b++;
    //   cout << 1 << endl;
    } else if (ch >= '0' && ch <= '9') {
      c++;
    //   cout << 2 << endl;
    } else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
      a++;
    //   cout << 3 << endl;
    } else if (ch < 0) {
      e++;
    //   cout << 4 << endl;
    } else {
      d++;
    //   cout << 5 << endl;
    }
  }
  cout << "英文字符有" << a << "个\n空格有" << b << "个\n数字有" << c
       << "个\n中文字符有" << e / 2 << "个\n其他字符有" << d << "个\n";
  return 0;
}