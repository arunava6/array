#include<stdio.h>
int main(){
	int arr[10];
	int i,n;
	printf("Enter how many elements you want: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	int x=50;
	// for adding elements in the last position
//	n=n+1;
//	arr[n-1]=x;
//	for(i=0;i<n;i++){
//		printf("%d ",arr[i]);
//	}
	
//	// adding elements in the first position
//	n=n+1;
//	for(i=n-1;i>0;i--){
//		arr[i]=arr[i-1];
//	}
//	arr[0]=x;
//	for(i=0;i<n;i++){
//		printf("%d ",arr[i]);
//	}
	
	//adding elements in the specific position
	n=n+1;
	int pos=3;
	for(i=n-1;i>pos-1;i--){
		arr[i]=arr[i-1];
	}
	arr[pos-1]=x;
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}




