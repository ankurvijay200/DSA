#include<iostream>

using namespace std;

void insertionSort(int arr[], int size){
    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];

        int j = i - 1;
        for(j ; j >= 0 ; j--){
            if (arr[j] > temp)
                arr[j+1] = arr[j];
            else
                break;
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