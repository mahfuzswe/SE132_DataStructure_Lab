#include <stdio.h>

int main()
{   
    int a[10],i,newvalue;

    printf("Enter 5 array elements: ");
    for(i=0; i<5; i++) scanf("%d",&a[i]);

    printf("array elements are: ");
    for(i=0; i<5; i++) printf("%d ",a[i]);

    printf("\nvalue of i = %d\n",i);

    printf("Enter the value that you want to insert: ");
    scanf("%d",&newvalue);

    a[i] = newvalue;

    printf("\nAfter insertion, array elements are: ");
    for(i=0; i<5+1; i++) printf("%d ",a[i]);
	
	return 0;
}
