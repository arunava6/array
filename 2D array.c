#include<stdio.h>
int main(){
	int arr[10][10],row,col,i,j;
	printf("Enter the size of row: ");
	scanf("%d",&row);
	printf("Enter the size of column: ");
	scanf("%d",&col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	printf("The array is:\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}


