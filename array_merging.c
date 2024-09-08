#include<stdio.h>
int main(){
	int arr1[10],i,j;
	// taking sorted array1
	for(i=0;i<5;i++){
		scanf("%d ",&arr1[i]);
	}
	int arr2[10];
	// taking sorted array2
	for(i=0;i<5;i++){
		scanf("%d",&arr2[i]);
	}
	int arr3[20];
	for(i=0;i<5;i++){
		arr3[i]=arr1[i];
		arr3[5+i]=arr2[i];
	}
	for(i=0;i<10;i++){
		printf("%d ",arr3[i]);
	}
}








