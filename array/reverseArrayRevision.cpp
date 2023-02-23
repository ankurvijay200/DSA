#include<iostream>

using namespace std;

void reverse(int arr[] , int size){
    int start = 0 , end = size-1;

    while (start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin>>array[i];    
    }

    reverse(array,n);
    printArray(array,n);
    
}