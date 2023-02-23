#include<iostream>
using namespace std;

bool isPossible(int arr[], int size, int m, int mid){
    int studentCount = 1;
    int pageSum = 0;

    for (int i = 0; i < size; i++)
    {
        if(pageSum + arr[i] <= mid){
            pageSum += arr[i];
        }
        else{
            studentCount++;
            if(studentCount > m || arr[i] > mid){
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int allocate(int arr[], int size, int m){
    int start = 0, sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    
    int end = sum, ans = -1;

    int mid = start + ( end - start) / 2;

    while (start <= end)
    {
        if(isPossible(arr, size, m, mid)){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
        mid = start + ( end - start) / 2;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;

    int array[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    
    int m;
    cin>>m;

    cout<<allocate(array, n, m);
}