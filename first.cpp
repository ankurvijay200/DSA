#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int num = n, digit, rev = 0;

    while (num != 0)
    {
        digit = num % 10;
        rev = ( rev * 10) + digit;
        num = num / 10;
    }
    if (rev ==  n)
        cout<<"Palindrome";
    else
        cout<<"Not Palindrome";
    return 0;
}