#include<iostream>
#include<math.h>
#include <bits/stdc++.h>
using namespace std;
void minMax(int arr[], int size){
    int min=INT_MAX, max= INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]>max)
            max = arr[i];

        if(arr[i]<min)
            min = arr[i];
    }
    cout<<"Min :"<<min<<endl<<"Max :"<<max<<endl;
}
int main(){   
    int n; 
    cin>>n;
    int array[n];

    for (int i = 0; i < n; i++)
    {
            cin>>array[i];
    }
    minMax(array,n);
}