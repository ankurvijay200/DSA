#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    int array[n], hash[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>array[i];
        hash[i]=0;
    }

    for (int i = 0; i < n; i++)
    {
        int val = array[i];
        hash[val]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (hash[i] == 2)   
        {
            cout<<i<<" ";
        }
    }
}