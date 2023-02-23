//------binary Search
#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start=0, end = size-1;
    int mid = (start + end)/2;

    while (start<=end)
    {
        if(key == arr[mid])
            return mid;
//hello 1 efmwj
        if(key>arr[mid])
            end = mid-1;
        else
            start = mid+1;

        mid = (start + end)/2;
    }
    return -1;
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

    int index = binarySearch(array, n, key);
    cout<<index<<endl;
    return 0;
}