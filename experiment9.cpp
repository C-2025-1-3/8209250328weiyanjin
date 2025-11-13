#include <iostream>
using namespace std;

int main() {
  int i;
  int j = 0;
  double aver;
  double sum = 0;
  for (i = 2; i <= 100; i *= 2) {
    sum = sum + i * 0.8;
    j++;
  }
  aver = sum / j;
  cout<<aver;
  return 0;
}
