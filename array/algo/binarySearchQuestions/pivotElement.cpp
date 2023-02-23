#include<iostream>
using namespace std;

int pivotElement(int arr[], int size){
    int start = 0 , end = size - 1;
    int mid   = start + ( end - start)/2;

    while (start < end)
    {
        if(arr[mid] >= arr[0]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = start + ( end - start)/2;
    }
    return arr[start];
}

int main(){
    int n;
    cin>>n;

    int array[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    cout<<pivotElement(array, n);    
}