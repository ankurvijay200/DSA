#include<iostream>
using namespace std;

void reverseArray(int arr[], int size){
    int start = 0 , end = size-1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
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
    
    reverseArray(array, n);

    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }
    
}