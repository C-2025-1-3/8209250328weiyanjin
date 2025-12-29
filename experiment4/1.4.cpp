#include<iostream>
using namespace std;
int a[85],b[85],lena,lenb,list[200];
void merge(const int list1[], int size1, const int list2[], int size2,int ans[]){
	int len=1;
	for(int i=1,j=1;i<=size1||j<=size2;){
		if(j>size2) ans[len++]=a[i++];
		else if(i>size1) ans[len++]=b[j++];
		if(a[i]<=b[j]&&i<=size1){
			ans[len++]=a[i++];
		}else if(b[j]<a[i]&&j<=size2){
			ans[len++]=b[j++];
		}
	}
	for(int i=1;i<len;i++){
		cout<<ans[i]<<" ";
	}
}
int main(){
	cout<<"Enter list1:";
	cin>>lena;
	for(int i=1;i<=lena;i++){
		cin>>a[i];
	}
	cout<<"Enter list2:";
	cin>>lenb;
	for(int i=1;i<=lenb;i++){
		cin>>b[i];
	}
	cout<<"The merged list is ";
	merge(a,lena,b,lenb,list);
	return 0;
}


//5 1 5 16 61 111
//4 2 4 5 6
