#include<iostream>

using namespace std;

int binarySearch(int arr[], int size, int key){
    int start=0, end = size-1;

    //int mid = (start+end)/2 :- we can also write this;
    int mid = start + (end - start)/2;

    while (start<=end)
    {
        if (key == arr[mid])
            return mid;

        if(key>arr[mid])
            start = mid+1;
        else
            end = mid-1;

        mid = (start+end)/2;
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