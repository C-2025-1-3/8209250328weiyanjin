#include <iostream>             //将类声明头文件包含进来
#include<cstring>
#include "student.h"
int main() {
	Student stud1;                //定义对象
	stud1.set_value(007, "tcg", 'm');
	stud1.display();              //执行stud对象的display函数
	return 0;
}

