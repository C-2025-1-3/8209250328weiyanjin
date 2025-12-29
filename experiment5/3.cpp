#include<iostream>
using namespace std;
class cuboid {
	int length;
	int width;
	int height;
public:
	cuboid(int len, int wid, int hei) {
		length = len;
		width = wid;
		height = hei;
	}
	int caculate() {
		return length * width * height;
	}
};
int main() {
	int len, wid, hei;
	for (int i = 1; i <= 3; i++) {
		cin >> len >> wid >> hei;
		cuboid cu(len, wid, hei);
		int ans = cu.caculate();
		cout << ans;
	}
	return 0;
}

