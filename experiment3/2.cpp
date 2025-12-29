#include<iostream>
using namespace std;
bool book[1306];
bool is_prime(int num) {
	return book[num];
}
int main() {
	for (int i = 2; i <= 1300; i++) {//0是质数1不是
		if (book[i] == 0) {
			for (int j = 2; j * i <= 1300; j++) {
				book[i * j] = 1;
			}
		}
	}
	int len = 0;
	for (int i = 2; i <= 1300; i++) {
		if(len==200) break;
		if (!is_prime(i)) {
			cout << i << " ";
			len++;
			if(len%10==0){
				cout<<endl;
			}
		}
	}
	return 0;
}
