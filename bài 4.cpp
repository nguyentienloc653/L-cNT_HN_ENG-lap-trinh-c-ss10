#include<stdio.h>
int main(){
	int arr[]={3,1,7,5,4};
	int size=sizeof(arr)/sizeof(int);
	
	for(int i=0; i<size-1; i++){
		int minIndex=i;
		for(int j=i+1; j<size; j++){
			if(arr[j]<arr[minIndex]){
				minIndex=j;
			}
		}
		int temp=arr[minIndex];
		arr[minIndex]=arr[i];
		arr[i]=temp;
	}
	for(int i=0; i<size; i++){
		printf("%d\t", arr[i]);
	}
	return 0;
}
