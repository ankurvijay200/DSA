#include<iostream>

using namespace std;

int sortArray(int arr[], int size){
    int hash[2] = {0,0};
    for (int i = 0; i < size; i++)
    {
        int val = arr[i];
        hash[val]++;
    }

    for (int i = 0; i < 2; i++)
    {
        int count = hash[i];

        for (int j = 0; j < count; j++)
        {
            cout<<i<<" ";
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
}