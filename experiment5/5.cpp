#include<iostream>
using namespace std;
class Point {
	int x;
	int y;
public:
	Point() {
		x=60,y=80;
	}
	void setPoint(int i,int j){
		x+=i;
		y+=j;
	}
	void display(){
		cout<<x<<" "<<y;
	}
};
int main(){
	Point point;
	point.setPoint(1,2);
	point.display();
	return 0;
}
