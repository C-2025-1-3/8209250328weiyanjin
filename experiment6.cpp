#include <iostream>
#define int long long
using namespace std;
int a, b;
signed main() {
  cin >> a >> b;
  if(a==1){
    cout<<1<<" "<<b<<endl;
  }else if(b==1){
    cout<<1<<" "<<a<<endl;
  }
  int maxx = 1, minn = 1, i = 2;
  for (i = min(a, b) - 1; i >= 2; i--) {
    if (a % i == 0 && b % i == 0) {
      maxx = i;
      break;
    }
  }
  minn=a/i*b/i*i;
  cout<<maxx<<" "<<minn<<endl;
  return 0;
}