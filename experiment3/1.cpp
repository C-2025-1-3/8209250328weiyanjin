#include<iostream>
using namespace std;
int gcd(int n,int m){
	if(n%m==0) return m;
	return gcd(m,n%m);
}
int main() {
	int m, n;
	cin >> m >> n;
	int ans = gcd(m, n);
	cout << ans << " " << m*n/ans;
	return 0;
}
