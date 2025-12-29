#include<iostream>
using namespace std;
int n;
int *num;
void qsort(int start,int end){
	int l=start,r=end;
	int mid=num[l+r>>1];
	while(l<=r){
		while(num[l]<mid){
			l++;
		}
		while(num[r]>mid){
			r--;
		}
		if(l<=r){
			int tmp=num[l];
			num[l]=num[r];
			num[r]=tmp;
			l++;r--;
		}
	}
	if(l<end) qsort(l,end);
	if(r>start) qsort(start,r);
}
int main(){
	cin>>n;
	num=new int[n];
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	qsort(0,n-1);
	for(int i=0;i<n;i++){
		printf("%d ",*(num+i));
	}
	delete[] num;
	return 0;
}
