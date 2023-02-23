#include<iostream>
using namespace std;

int pivot(int arr[], int size){
    int start = 0, end = size - 1;
    int mid = start + ( end - start)/2;

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
    return start;
}

int binarySearch(int arr[], int start, int size, int key){
    int end = size - 1;
    int mid = start + ( end - start)/2;

    while (start <= end)
    {
        if(arr[mid] == key){
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + ( end - start)/2;
    }
    return -1;
}

int searchMain(int arr[], int size, int key){
    int start = 0, end = size -1, ans;
    int p = pivot(arr,size);

    if(key >= arr[p] && key <= arr[end]){
        int start = p;
        ans = binarySearch(arr, start, size, key);
    }
    else{
        ans = binarySearch(arr, start, p, key);
    }
    return ans;
}

int main(){
    int n;
    cin>>n;

    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }

    int key;
    cin>>key;

    cout<<searchMain(array,n,key);
}