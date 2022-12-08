#include <stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* createLinkedList(int arr[],int size){
    struct Node *head = NULL;
    struct Node *temp = NULL;
    struct Node *current = NULL;

    
    int i;
    for(i=0; i<size; i++){
        temp = (struct Node*)malloc(sizeof(struct Node));
        temp -> data = arr[i];
        temp -> next = NULL;
    }
}

int main()
{
    int a[] = {5,10,30};
    createLinkedList(a,3);

    return 0;
}