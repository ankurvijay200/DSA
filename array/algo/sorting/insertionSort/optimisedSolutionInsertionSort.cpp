#include<iostream>
using namespace std;

void insertionSort(int arr[], int size){
    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        int j = i - 1;

        while (arr[j] > temp && j >= 0)
        {
            arr[j+1] = arr[j];
            j--; 
        }
        arr[j+1] = temp;
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
    
    insertionSort(array, n);
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }  
}