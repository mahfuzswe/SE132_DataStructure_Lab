// 1.2 Insert two numbers at two different positions 
// in an array by using variables.

#include<bits/stdc++.h>
using namespace std;

int arr[] = {10,20,30,40,50};

int main(){

    int len  = sizeof(arr)/sizeof(arr[0]);
    
    cout<<"initial arrray elements: ";
    for(int i=0; i<len; i++) cout<<arr[i]<<" ";

    cout<<"\nInsert position: ";      //First Insertion
    int position; cin>>position;

    for(int i=len+1; i>=position; i--) arr[i] = arr[i-1];
    len++;

    cout<<"Insert Number: ";
    cin>>arr[position-1];

    cout<<"Afer Insertion array elements: ";
    for(int i=0; i < len; i++) cout<<arr[i]<<" ";

    cout<<endl;


    cout<<"\nInsert position: ";      //Second Insertion
    cin>>position;

    for(int i=len+1; i>=position; i--) arr[i] = arr[i-1];
    len++;

    cout<<"Insert Number: ";
    cin>>arr[position-1];

    cout<<"Afer Insertion array elements: ";
    for(int i=0; i < len; i++) cout<<arr[i]<<" ";

    cout<<endl;


    return 0;
}
