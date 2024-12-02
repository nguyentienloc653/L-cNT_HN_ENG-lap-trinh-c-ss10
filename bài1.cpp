#include<stdio.h>
int main (){
	int arr[5]={1,3,8,4,7};
	int x,found;
	printf("Nhap vao phan tu bat ky: ");
	scanf("%d",&x);
	for(int i=0;i<5;i++){
		if(arr[i]==x){
			printf("Phan tu co ton tai");
			found=1;
			break;
		}
	}
	if(!found){
		printf("Phan tu khong ton tai trong mang");
	}
	return 0;
}
