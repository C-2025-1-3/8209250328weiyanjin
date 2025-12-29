#include<iostream>
using namespace std;
bool book[105];
int main(){
	for(int i=1;i<=100;i++){
		for(int j=i;j<=100;j+=i){
			book[j]=!book[j];//开是1
		}
	}
	for(int i=1;i<=100;i++){
		if(book[i]) cout<<i<<" ";
	}
	return 0;
}
