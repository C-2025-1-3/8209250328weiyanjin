#include <iostream>
using namespace std;
double x;
int main() {
  cout<<" Enter x:\n";
  cin >> x;
  double y;
  if (x > 0 && x < 1) {
    y = 3 - x * 2;
  } else if (x >= 1 && x < 5) {
    y = 0.5 / x + 1;
  } else if (x >= 5 && x < 10) {
    y = x * x;
  }
  cout <<"y="<< y << endl;
  return 0;
}