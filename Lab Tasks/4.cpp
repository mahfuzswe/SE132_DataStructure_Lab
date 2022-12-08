// 4.1 Suppose there is an array with any 10 elements. Now apply 
// binary search and Linear search both and decide which one mechanism 
// is best for finding that specific element

#include <bits/stdc++.h>
using namespace std;

int binarySearch(int ar[],int len, int key){
    
    int left = 0;
    int right = len-1;

    while(left <= right){

        int mid = (left+right) / 2;
        if(ar[mid] == key){
            return mid;
        }
        if(ar[mid] > key){
            right = mid - 1;
        }
        else left = mid+1;
    }
    return -1;
}

int linearSearch(int arr[], int len,int key){
    for (int i = 0; i < len; i++)
    {
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {13,6,4,8,1,10,5,7,16,2};

    int key;
    int len = sizeof(arr)/sizeof(arr[0]);
    
    sort(arr,arr+len);

    cout<<"Please search element : ";
    cin>>key;
    int rtrn = binarySearch(arr,len,key);

    if(rtrn > -1){
        cout<<"Search Element Exist : "<<arr[rtrn]<<endl;
    }
    else{
        cout<<"Does not Exist search element ."<<endl;
    }

    int linear_search = linearSearch(arr, len, key);

    if(linear_search > -1){
        cout<<"Search Element Exist : "<<arr[linear_search]<<endl;
    }
    else{
        cout<<"Does not Exist search element.";
    }

    return 0;
}