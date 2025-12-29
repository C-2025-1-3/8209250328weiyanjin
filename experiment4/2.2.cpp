#include<iostream>
#include<string>
using namespace std;
int parseHex(const char *const hexString) {
	int lena = 0;
	while (hexString[lena] != '\0') lena++;
	long long power[1000];
	for(int i=0;i<=1000;i++){
		if(i) power[i]=power[i-1]*16;
		else power[i]=1;
	}
	long long ans=0;
	for(int i=lena-1;i>=0;i--){
		ans+=(hexString[i]>='0'&&hexString[i]<='9'?hexString[i]-'0':hexString[i]-'A'+10)*power[lena-i-1];
	}
	return ans;
}
int main() {
	char *p = new char[1000];
	cin.getline(p, 999);
	cout<<parseHex(p);
	delete[] p;
	return 0;
}
