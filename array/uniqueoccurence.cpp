#include<iostream>
#include<math.h>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int array[n];
    vector<int>ans;
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }

    sort(array[0],array[n-1]);
    int j =0;
    while(j<n)
    {
        int count = 1;
        for (int k = 0; k < n; k++)
        {
            if(array[j] == array[k]){
                count++;
            }
            else{
                break;
            }
        }
        ans.push_back(count);
        j += count;
    }
    
    n=ans.size();
    sort(ans[0],ans[n-1]);
    for (int l = 0; l < n-1; l++)
    {
        if(ans[l] == ans[l+1]){
            return false;
        }
    }
    
    return true;
}