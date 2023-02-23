#include<iostream>

using namespace std;

void pairSum(int arr[], int size, int sum){
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if(arr[i] + arr[j] == sum){
                if (arr[i]>arr[j])
                    cout<<arr[j]<<" "<<arr[i]<<endl;
                else
                    cout<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
    }  
}

int main(){
    int n,s;
    cin>>n>>s;

    int array[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>array[i];
    }

    pairSum(array,n,s);
}