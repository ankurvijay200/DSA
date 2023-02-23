#include<iostream>
using namespace std;

int firstOccurence(int arr[], int size, int key){
    int start = 0, end = size - 1, ans = -1;
    int mid = start + (end - start)/2;

    while(start<=end)
    {
            if(arr[mid] == key){
                ans = mid;
                end = mid - 1;
            }
            else if (key > arr[mid])
            {
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        mid = start + (end - start)/2;
    }
    return ans;
}

int lastOccurence(int arr[], int size, int key){
    int start = 0, end = size - 1, ans = -1;
    int mid = start + (end - start)/2;

    while (start <= end){
        if(arr[mid] == key){
            start = mid + 1;
            ans = mid;
        }
        else if(key < arr[mid]){
            end = mid - 1;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int totalOccurence(int arr[], int size, int key){
    
    int f = firstOccurence(arr, size, key);
    int l = lastOccurence(arr, size, key);

    int total = (l - f) + 1;
    return total;
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

    cout<<"Total Occurence of "<< key<<" is : "<<totalOccurence(array, n, key);
}