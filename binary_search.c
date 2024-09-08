//#include<stdio.h>
//int main(){
//	int n,arr[20],i;
//	printf("Enter the number of elements: ");
//	scanf("%d",&n);
//	for(i=0;i<n;i++){
//		scanf("%d",&arr[i]);
//	}
//	int beg,end,mid,item;
//	printf("Enter the element you want to search: ");
//	scanf("%d",&item);
//	beg=0,end=n-1;
//	int temp=-1;
//	while(beg<=end){
//		mid=(beg+end)/2;
//		if(item==arr[mid]){
//			temp=mid;
//			break;
//		}
//		else if(item<arr[mid]){
//			end=mid-1;
//		}
//		else{
//			beg=mid+1;
//		}
//	}
//	if(temp!=-1){
//	printf("the element is found at index: %d",temp);
//	}else{
//		printf("The element not found");
//	}
//}









// Linear search

#include<stdio.h>
int main(){
	int arr[20],n,i;
	printf("Enter the number of elements you want: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int item,loc=-1;
	printf("Enter the number you want to search: ");
	scanf("%d",&item);
	for(i=0;i<n;i++){
		if(item==arr[i]){
			loc=i;
			break;
		}
	}
	if(loc!=-1){
		printf("The element is found at index: %d",loc);
	}else{
		printf("The element is not found");
	}
}






#include<stdio.h>
int main(){
	int n,arr[20],i;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int beg,end,mid,item;
	printf("Enter the element you want to search: ");
	scanf("%d",&item);
	beg=0,end=n-1;
	int temp=-1;
	while(beg<=end){
		mid=(beg+end)/2;
		if(item==arr[mid]){
			temp=mid;
			break;
		}
		else if(item<arr[mid]){
			end=mid-1;
		}
		else{
			beg=mid+1;
		}
	}
	if(temp!=-1){
	printf("the element is found at index: %d",temp);
	}else{
		printf("The element not found");
	}
	int loc=arr[temp]+1;
	int value;
	for(i=temp;i<n;i++){
		if(loc==arr[i+1]){
			loc=loc+1;
		}else{
			value=loc;
		}
	}
	printf("\n%d",loc);
}

























