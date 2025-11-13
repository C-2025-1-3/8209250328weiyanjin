#include<iostream>
using namespace std;

int main(){
    char ch;
    ch=getchar();
    if(ch>='a'&&ch<='z'){
        cout<<(char)(ch-32)<<endl;
    }else{
        cout<<ch+1<<endl;
    }
    return 0;
}
