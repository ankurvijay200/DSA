#include<iostream>
#include<math.h>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int array[n];
    for (int i = 0; i < n; i++)
    {               
        cin>>array[i];
    }
    
    int s = 0 , e = n-1;

    while(s<e)
    {
        swap(array[s],array[e]);
        s++;
        e--;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}