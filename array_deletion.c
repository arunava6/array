#include<stdio.h>
int main(){
	int arr[10],i,n;
	printf("Enter elements: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	// deletion for specific position
	int pos;
	printf("Enter the position: ");
	scanf("%d",&pos);
	for(i=pos-1;i<n;i++){
		arr[i]=arr[i+1];
	}
	for(i=0;i<n-1;i++){
		printf("%d ",arr[i]);
	}
}

