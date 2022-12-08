#include <stdio.h>

int main()
{   
    printf("Enter array size: ");
    int n; scanf("%d",&n);
    int arr[n];

    printf("Enter %d elements: ",n);
    for(int i=0; i<n; i++) scanf("%d",&arr[i]);

    printf("Inserted array elements: ");
    for(int i=0; i<n; i++) printf("%d ",arr[i]);

    return 0;
}
