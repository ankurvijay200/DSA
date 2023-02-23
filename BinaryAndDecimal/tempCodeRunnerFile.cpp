// Reverse an integer and if result is out of range return 0

#include<iostream>
#include<math.h>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,ans =0;
    cin>>n;

    while (n!=0)
    {
        int digit = n %10;

        if((ans > INT_MAX/10) || ( ans < INT_MIN/10)){
            return 0;
        }

        ans = (ans*10)+digit;
        n = n/10;
    }
    
    cout << ans;
}