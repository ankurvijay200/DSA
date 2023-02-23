#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

void swap(int arr[], int size){
    for (int i = 0; i < size; i+=2)
    {
        if(i+1 < size){
            swap(arr[i],arr[i+1]);
        }
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

    swap(array,n);
    printArray(array,n);
    
}