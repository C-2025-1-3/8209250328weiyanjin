#include<iostream>
using namespace std;
class Time {           // 定义Time类
private:
	int hour;
	int minute;
	int sec;
public:
	void setter(int hour,int minute,int sec){
		this->hour=hour;
		this->minute=minute;
		this->sec=sec;
	}
	void getter(){
		cout<<hour<<": "<<minute<<": "<<sec;
	}
};
int main() {
	Time tl;           
	int a,b,c;
	cin>>a>>b>>c;
	tl.setter(a,b,c);
	tl.getter();
	return 0;
}

