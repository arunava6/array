//#include <stdio.h>
//int main (){
//   int num[20];
//   int i,j,temp,n;
//   printf("enter number of elements in an array: ");
//   scanf("%d",&n);
//   printf("Enter the elements: ");
//   for (i=0; i<n; i++)
//      scanf("%d", &num[i]);
//   for (i = 0; i<n; i++){
//      for (j = i+1; j<n;j++){
//         if (num[i]>num[j]){
//            temp=num[i];
//            num[i]=num[j];
//            num[j]=temp;
//         }
//      }
//   }
//   printf("The numbers in ascending order is:");
//   for (i = 0; i<n;i++){
//      printf("%d ", num[i]);
//   }
//}








// another type of sorting

#include <stdio.h>
int main (){
   int num[20];
   int i,j,temp,n;
   printf("enter number of elements in an array: ");
   scanf("%d",&n);
   for (i=0; i<n; i++)
      scanf("%d", &num[i]);
   for (i = 0; i<n; i++){
      for (j = 0; j<n-1-i;j++){
         if (num[j]>num[j+1]){
            temp=num[j];
            num[j]=num[j+1];
            num[j+1]=temp;
         }
      }
   }
   printf("The numbers in ascending order is:");
   for (i = 0; i<n;i++){
      printf("%d ", num[i]);
   }
}





