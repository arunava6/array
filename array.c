//#include<stdio.h>
//int main(){
//	int arr[50],i,count=0;
//	for(i=0;i<5;i++){
//		scanf("%d",&arr[i]);
//	}
//	//printf("Given array is: ");
//	for(i=0;i<5;i++){
//		if(arr[i]>25){
//			count=count+1;
//		}
//	}
//	printf("%d",count);
//	return 0;
//}





#include<stdio.h>
int main(){
	int arr[50],i,sum=0;
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	//printf("Given array is: ");
	for(i=0;i<5;i++){
		if(arr[i]>9 && arr[i]<100){
			sum=arr[i]+sum;
		}
	}
	printf("%d",sum);
	return 0;
}


