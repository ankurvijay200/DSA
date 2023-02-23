#include<iostream>
using namespace std;

bool search(int array[], int n , int element){
    for(int i = 0 ; i<n ; i++){
        if(array[i] == element){
            return true;
        }
    }
    return false;
}

int main(){
    int n;
    cin>>n;

    int array[n];

    for (int  i = 0; i < n; i++)
    {
        cin>>array[i];        
    }
    int element;
    cin>>element;

    if(search(array,n,element))
        cout<<"Found";
    else
        cout<<"Not Found";
    
}