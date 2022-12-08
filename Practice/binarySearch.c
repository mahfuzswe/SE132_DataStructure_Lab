#include<stdio.h>

int binarySearch(int arr[],int n,int key){
    int start = 0;
    int end = n;

    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid]==key) return mid;
        else if(arr[mid]>key) end = mid-1;
        else start = mid +1;
    }
    return -1;
}

int main()
{
    int n; scanf("%d",&n);
    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    int key; scanf("%d",&key);

    printf("%d",binarySearch(arr,n,key));

    return 0;
}
