#include<iostream>
using namespace std;
int solve(int day){
	if(day==10) return 1;
	return (solve(day+1)+1)*2;
}
int main(){
	int ans=1;
	ans=solve(1);
	cout<<ans<<endl;
	return 0;
}
