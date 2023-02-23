#include<iostream>

using namespace std;
int findDuplicate(int arr[], int size){
    int ans=0;
    
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }

    for (int i = 1; i < size; i++)
    {
        ans = ans ^ i ;
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
    
    cout<<findDuplicate(array,n);
}
