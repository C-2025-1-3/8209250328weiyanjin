#include<iostream>
#include<string>
using namespace std;
class Student {
public:
	string a;
	double score;
};
string getMax(Student* a) {
	string maxa;
	double maxx = 0;
	for (int i = 0; i < 5; i++) {
		if (a[i].score > maxx) {
			maxx = a[i].score;
			maxa = a[i].a;
		}
	}
	return maxa;
}
int main() {
	Student* students = new Student[5];
	for (int i = 0; i < 5; i++) {
		cin >> students[i].a >> students[i].score;
	}
	cout << getMax(students);
	delete [] students;
	return 0;
}
