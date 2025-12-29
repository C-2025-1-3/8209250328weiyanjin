#include<iostream>
#include<string>
using namespace std;
const int mod1 = 101;
string a, b;
unsigned long long h1, h2;
int indexOf(string a, string b) {
	int lena = a.length(), lenb = b.length();
	for (int i = 0; i < lenb; i++) {
		h2 = (h2 * mod1) + (b[i] - 'A' + 1);
	}
	for (int i = 0; i < lenb; i++) {
		h1 = (h1 * mod1) + (a[i] - 'A' + 1);
	}
	if (h1 == h2) {
		return 0;
	}
	unsigned long long power = 1;
	for (int i = 1; i < lenb; i++) {
		power *= mod1;
	}
	for (int i = 1; i < lena - lenb - 1; i++) {
		h1 -= (a[i - 1] - 'A' + 1) * power;
		h1 = (h1 * mod1) + (a[i + lenb - 1] - 'A' + 1);
		if (h1 == h2) {
			return i;
		}
	}
	return -1;
}
int main() {
	char ch;
	cout<<"Enter the first string:";
	while ((ch = getchar()) != '\n') {
		b += ch;
	}
	cout<<"Enter the second string:";
	while ((ch = getchar()) != '\n') {
		a += ch;
	}

	cout<<"indexOf("<<'"'<<b<<'"'<<','<<'"'<<a<<'"'<<")is"<<indexOf(a,b);

	return 0;
}
