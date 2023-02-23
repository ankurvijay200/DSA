#include<iostream>

using namespace std;

int sumArray(int arr[],int size){
    int sum=0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main(){
    int n;
    cin>>n;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }

    cout<<"Sum : "<<sumArray(array,n);
}