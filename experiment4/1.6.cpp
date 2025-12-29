#include<iostream>
#include<string>
using namespace std;
int tong[30];
void count(string g, int length) {
	for (int i = 0; i < length; i++) {
		if (g[i] >= 'A' && g[i] <= 'Z') {
			tong[g[i] - 'A' + 1]++;
		} else if (g[i] >= 'a' && g[i] <= 'z') {
			tong[g[i] - 'a' + 1]++;
		}
	}
	for (int i = 1; i <= 26; i++) {
		if (tong[i]) {
			cout << char(i + 'a' - 1) << ":" << tong[i] << " times" << endl;
		}
	}
}
int main() {
	string ch;
	char tmp;
	while ((tmp = getchar()) != '\n') {
		ch += tmp;
	}
	count(ch, ch.length());
	return 0;
}
