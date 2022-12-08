// Bubble sort
#include<stdio.h>

int main(){

    printf("Enter array size: ");
    int n,i,j; scanf("%d",&n);

    int arr[n];
    printf("Enter %d elements: ",n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    printf("Initial array elements: ");
    for(i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

    for(i=0; i<n-1; i++){
        for(j=0; j<n-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    } 
    printf("\nAfter sorting: ");
    for(i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}
