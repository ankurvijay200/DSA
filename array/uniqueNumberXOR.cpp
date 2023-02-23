#include<iostream>

using namespace std;

int uniqueNumber(int array[], int size){
    int ans=0;

    for (int i = 0; i < size; i++)
    {
        ans = ans^array[i];
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
    
    cout<<uniqueNumber(array,n);
    
}