#include<iostream>
using namespace std;
double a[10];
void qsort(int start,int end){
	if(start>end) return;
	int l=start,r=end;
	double mid=a[l+r>>1];
	while(l<=r){
		while(a[l]<mid){
			l++;
		}
		while(a[r]>mid){
			r--;
		}
		if(l<=r){
			swap(a[l],a[r]);
			l++;r--;
		}
	}
	if(l<=end) qsort(l,end);
	if(r>=start) qsort(start,r);
}
int main(){
	for(int i=0;i<10;i++){
		cin>>a[i];
	}
	qsort(0,9);
	for(int i=0;i<10;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
