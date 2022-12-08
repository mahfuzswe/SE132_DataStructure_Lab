//Array deletion by using index no.

#include<stdio.h>

int main(){

    int a[10],i,newindex,n;

    printf("Enter array Size less than 10: ");
    scanf("%d",&n);

    printf("\nEnter %d array elements: ",n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);

    printf("\nArray elements are: ");
    for(i=0;i<n;i++) printf("%d ",a[i]);

    printf("\n\nEnter the index of one specific data that you want to delete: ");
    scanf("%d",&newindex);

    for(i=newindex;i<=n-1;i++) a[i]=a[i+1];

    printf("\nAfter Deletion elements of the array are: ");
    for(i=0;i<n-1;i++) printf("%d ",a[i]);

    printf("\n\n");

return 0;

}
