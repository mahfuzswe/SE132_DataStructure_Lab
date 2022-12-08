// 1.1 Insert two numbers sequentially at the last 
// position in an array by using variables

#include<bits/stdc++.h>
using namespace std;

int arr[] = {5,10,15,20,25};

int main(){

    cout<<"Insert two number: ";
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i=len; i<len+2; i++) cin>>arr[i];

    cout<<"After Insertion upadated array elements: ";
    for(int i=0; i<len+2; i++) cout<<arr[i]<<"  ";

    cout<<endl;

    return 0;
}