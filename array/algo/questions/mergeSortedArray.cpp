#include<iostream>
#include<vector>
using namespace std;

void mergeSortedArray(vector<int>& arr1, vector<int>& arr2, vector<int>& arr3, int m, int n){
    int i = 0, j = 0;
    while(i<m && j<n){
        if(arr1[i] < arr2[j])
            arr3.push_back(arr1[i++]);
        else
            arr3.push_back(arr2[j++]);
    }

    while(i<m){
        arr3.push_back(arr1[i++]);
    }

    while (j<n)
    {
        arr3.push_back(arr2[j++]);
    }
}

int main(){

    vector<int> arr1;
    vector<int> arr2;
    vector<int> arr3;

    arr1.push_back(10);
    //arr1.push_back(30);
    //arr1.push_back(50);
    arr1.push_back(70);

    arr2.push_back(20);
    arr2.push_back(25);
    arr2.push_back(60);
    arr2.push_back(80);

    int m = arr1.size(), n = arr2.size();
    mergeSortedArray(arr1, arr2, arr3, m, n);

    for (int i = 0; i < arr3.size(); i++)
    {
        cout<<arr3[i]<<" ";
    }
    
}