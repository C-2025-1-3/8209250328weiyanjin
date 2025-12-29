#include<iostream>
using namespace std;
int indexOf(const char *s1, const char *s2) {
	int len1 = 0, len2 = 0;
	while (s1[len1] != '\0'){ len1++;}
	while (s2[len2] != '\0') {len2++;}
	if (len1 > len2) return -1;
	for (int i = 0; i <= len2 - len1; i++) {
		int j;
		for (j = 0; j < len1; j++) {
			if (s2[i + j] != s1[j]) {
				break;
			}
		}
		if (j == len1) return i;
	}
	return -1;
}
int main() {
	char* s1,*s2;
	s1 = new char[1000], s2 = new char[1000];
	cin.getline(s1, 999);
	cin.getline(s2, 999);
	cout << indexOf(s1, s2);
	delete[] s1;
	delete[] s2;
	return 0;
}
