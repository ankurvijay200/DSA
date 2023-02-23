#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        int minIndex = i;

        for (int j = i+1 ; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                minIndex = j ;
            }
        }
            int temp = arr[minIndex];
            arr[minIndex] = arr[i];
            arr[i] = temp;
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
    
    selectionSort(array, n);

    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }
    
}