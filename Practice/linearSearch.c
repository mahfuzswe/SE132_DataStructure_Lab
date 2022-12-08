//Linear Search

#include<stdio.h>

int linearSearch(int arr[],int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){

    int n; scanf("%d",&n);
    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    int key; scanf("%d",&key);

    printf("%d",linearSearch(arr,n,key));

    return 0;
}
