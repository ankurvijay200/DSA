#include<iostream>
#include<algorithm>
using namespace std;

bool isPossible(int arr[], int n, int c, int mid){
    int cowCount = 1;
    int lastPos = arr[0];

    for (int i = 0; i < n; i++)
    {
        if(arr[i] - lastPos >= mid){
            cowCount++;
            if(cowCount == c){
                return true;
            }
            lastPos = arr[i];
        }
    }
    return false;
}

int aggresiveCow(int arr[], int n, int c){
    int start = 0, end = 0, ans = -1;

    for (int  i = 0; i < n; i++)
    {
        end = max(end, arr[i]);
    }
    
    int mid = start + ( end - start)/2;

    while (start <= end)
    {
        if(isPossible(arr, n, c, mid)){
            start = mid + 1;
            ans = mid;
        }
        else{
            end = mid - 1;
        }
        mid = start + ( end - start)/2;
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
    
    int c;
    cin>>c;

    int len = sizeof(array)/sizeof(array[0]);
    sort(array, array + len);

    cout<<aggresiveCow(array, n, c);
}