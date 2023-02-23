#include<iostream>
using namespace std;

bool isPossible(int arr[], int size, int p, int mid){
    int boardCount = 0;
    int painterCount = 1;
    
    for(int i = 0 ; i < size ; i++){
        if(boardCount + arr[i] <= mid){
            boardCount += arr[i];
        }
        else{
            painterCount++;
            if(painterCount > p || arr[i] > mid){
                return false;
            }
            boardCount = arr[i];
        }
    }
    return true;
}

int painterProblem(int arr[], int size, int p){
    int start = 0, end = 0, ans = -1;

    for (int i = 0; i < size; i++)
    {
        end += arr[i];
    }
    
    int mid = start + ( end - start)/2;

    while (start <= end)
    {
        if(isPossible(arr, size, p, mid)){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
        mid = start + ( end - start)/2;
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
    
    int p;
    cin>>p;

    cout<<painterProblem(array, n, p);
}