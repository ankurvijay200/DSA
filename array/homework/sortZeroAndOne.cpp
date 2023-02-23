#include<iostream>

using namespace std;

int sortArray(int arr[], int size){
    int left = 0 , right = size-1;

    while (left < right)
    {
        while (arr[left] == 0 && left < right)
        {
            left++;
        }

        while (arr[right] == 1 && left < right)
        {
            right--;
        }
        
        if (left < right)
        {
                swap(arr[left], arr[right]);
                left++;
                right--;
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
    
    sortArray(array,n);
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }
    
}