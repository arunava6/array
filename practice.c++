// // #include<stdio.h>
// // void display(int arr[],int n){
// //     for(int i=0;i<n;i++){
// //         printf("%d ",arr[i]);
// //     }
// //     printf("\n");
// // }
// // int main(){
// //     int arr[10];
// //     int n;
// //     scanf("%d",&n);
// //     for(int i=0;i<n;i++){
// //         scanf("%d",&arr[i]);
// //     }
// //     display(arr,n);
// //     n=n+1;
// //     int value=40;
// //     for(int i=n-1;i>0;i--){
// //         arr[i]=arr[i-1];
// //     }
// //     arr[0]=value;
// //     display(arr,n);
// // }



// // #include<stdio.h>
// // void display(int arr[],int n){
// //     for(int i=0;i<n;i++){
// //         printf("%d ",arr[i]);
// //     }
// //     printf("\n");
// // }
// // int main(){
// //     int arr[10];
// //     int n;
// //     scanf("%d",&n);
// //     for(int i=0;i<n;i++){
// //         scanf("%d",&arr[i]);
// //     }
// //     display(arr,n);
// //     int value=40;
// //     n=n+1;
// //     arr[n-1]=value;
// //     display(arr,n);
// // }






// // #include<stdio.h>
// // void display(int arr[],int n){
// //     for(int i=0;i<n;i++){
// //         printf("%d ",arr[i]);
// //     }
// //     printf("\n");
// // }
// // int main(){
// //     int arr[10];
// //     int n;
// //     scanf("%d",&n);
// //     for(int i=0;i<n;i++){
// //         scanf("%d ",&arr[i]);
// //     }
// //     display(arr,n);
// //     int pos;
// //     scanf("%d",&pos);
// //     n=n+1;
// //     for(int i=n-1;i>pos-1;i--){
// //         arr[i]=arr[i-1];
// //     }
// //     arr[pos-1]=40;
// //     display(arr,n);

// // }




// // deletion

// // #include<stdio.h>
// // void display(int arr[],int n){
// //     for(int i=0;i<n;i++){
// //         printf("%d ",arr[i]);
// //     }
// //     printf("\n");
// // }
// // int main(){
// //     int arr[10];
// //     int n;
// //     scanf("%d",&n);
// //     for(int i=0;i<n;i++){
// //         scanf("%d",&arr[i]);
// //     }
// //     display(arr,n);
// //     int pos;
// //     scanf("%d",&pos);
// //     n=n-1;
// //     for(int i=pos-1;i<n;i++){
// //         arr[i]=arr[i+1];
// //     }
// //     display(arr,n);
// // }










// // bubble sort

// // #include<stdio.h>
// // void display(int arr[],int n){
// //     for(int i=0;i<n;i++){
// //         printf("%d ",arr[i]);
// //     }
// //     printf("\n");
// // }
// // int main(){
// //     int arr[10];
// //     int n,temp;
// //     scanf("%d",&n);
// //     for(int i=0;i<n;i++){
// //         scanf("%d",&arr[i]);
// //     }
// //     display(arr,n);
// //     for(int i=0;i<n;i++){
// //         for(int j=0;j<n-1-i;j++){
// //             if(arr[j]>arr[j+1]){
// //                 temp=arr[j];
// //                 arr[j]=arr[j+1];
// //                 arr[j+1]=temp;
// //             }
// //         }
// //     }
// //     display(arr,n);
// // }






// // Binary search

// #include<stdio.h>
// void display(int arr[],int n){
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
// }
// int main(){
//     int arr[10];
//     int n;
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     int item;
//     printf("Element for searching: ");
//     scanf("%d",&item);
//     int beg=0;
//     int end=n-1;
//     int temp=-1;
//     while(beg<=end){
//         int mid=(beg+end)/2;
//         if(item==arr[mid]){
//             temp=mid;
//             break;
//         }
//         else if(item<arr[mid]){
//             end=mid-1;
//         }
//         else{
//             beg=mid+1;
//         }
//     }
//     if(temp!=-1){
//         printf("The element is found at index %d",temp);
//     }
//     else{
//         printf("The element is not found");
//     }
// }


#include <iostream>
#include <algorithm>

void mergeArrays(int arr1[], int arr2[], int n1, int n2) {
    int i = 0, j = 0, k = 0;
    int arr3[n1+n2];

    // Merge arrays
    while (i<n1 && j <n2) {
        if (arr1[i] < arr2[j])
            arr3[k++] = arr1[i++];
        else
            arr3[k++] = arr2[j++];
    }

    // Store remaining elements of first array
    while (i < n1)
        arr3[k++] = arr1[i++];

    // Store remaining elements of second array
    while (j < n2)
        arr3[k++] = arr2[j++];

    // Removing duplicates
    // int temp[n1+n2];
    // int m = 1;
    // temp[0] = arr3[0];
    // for (int l=1; l<k; l++) {
    //     if (arr3[l] != arr3[l-1]) {
    //         temp[m++] = arr3[l];
    //     }
    // }

    // Print merged array
    std::cout << "Merged array: ";
    for (int l=0; l<k; l++)
        std::cout << arr3[l] << " ";
}

int main() {
    int arr1[] = {11, 2, 3, 9, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {4, 5, 11, 7, 8};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    // Sort arrays
    // std::sort(arr1, arr1 + n1);
    // std::sort(arr2, arr2 + n2);

    mergeArrays(arr1, arr2, n1, n2);


    return 0;
}

