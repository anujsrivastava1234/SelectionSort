#include <iostream>
using namespace std;
void swap(int* a,int* b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
void SelectionSort(int arr[],int size){
	for(int i=0;i<size-1;i++){
		for(int j=i+1;j<size;j++){
			if(arr[i]>arr[j]){
				swap(&arr[i],&arr[j]);
			}
		}
	}
}
void print(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int arr[5]{180,165,150,170,145};
	SelectionSort(arr,5);
	print(arr,5);
	return 0;
}
