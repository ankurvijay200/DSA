#include<iostream>

using namespace std;

int findUnique(int array[],int n){
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if(array[i] == array[j])
                count++;
        }
        if(count == 1)
            return array[i];
    }
    return 0;
}

int main(){
    int n;
    cin>>n;

    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    cout<<findUnique(array,n);
}