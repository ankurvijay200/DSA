#include<iostream>
#include<math.h>
#include <bits/stdc++.h>

using namespace std;

void bubbleSort(int arr[], int size){
    bool swapped = false;
    for (int i = 1; i < size; i++)
    {
        for (int j = 0; j < size-i; j++)
        {
            if(arr[j] > arr[j+1]){
                swapped = true;
                swap(arr[j], arr[j+1]);
            }
        }
        if(swapped == false)
            break;
    }
}

int main(){
    int n;
    cin>>n;

    int array[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    
    bubbleSort(array, n);

    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }
    
}