#include<iostream>

using namespace std;

void tripletSum(int arr[], int size, int sum){
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            for (int k = j+1; k < size; k++)
            {
                if(arr[i]+arr[j]+arr[k] == sum){
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                }
            }
        }
    }
}

int main(){
    int n,s;
    cin>>n>>s;

    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    
    tripletSum(array,n,s);

    return 0;               
}