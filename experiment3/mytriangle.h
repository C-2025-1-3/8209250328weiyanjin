#include<iostream>
#include<cmath>
using namespace std;
bool is_valid(double a,double b,double c){
	if(a+b>c&&a+c>b&&b+c>a){
		return 1;
	}
	return 0;
}
double area(double a,double b,double c){
	double s=(a+b+c)/2;
	return sqrt(s*(s-a)*(s-b)*(s-c));
}
