// 3.1 Apply binary search to find out an element 
// and delete the element.

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

int main()
{
    int arr[] = {10,20,30,40,50};

    int key;
    int len = sizeof(arr)/sizeof(arr[0]);
    
    sort(arr,arr+len);

    cout<<"Enter search element : ";
    cin>>key;
    int rtrn = binarySearch(arr,len,key);

    if(rtrn > -1){
        for(int i=rtrn; i < len-1 ; ++i){
            arr[i] = arr[i+1];
        }
        --len;
    }
    else{
        cout<<"Does not find element.\n";
        // return 0;
    }
    
    cout<<"Updated Array elements after deletion: ";
    for (int i = 0; i < len; i++)
    {
        cout<<arr[i] << " ";
    }
    cout<<endl;
    
    return 0;
}