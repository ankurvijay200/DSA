#include<iostream>
using namespace std;
int fibo(int n){
    int first = 0 , second = 1, next;
    for (int i = 2; i < n; i++)
    {
        next = first + second ;
        first = second;
        second = next;
    }
    return next;
}

int main(){
    int n;
    cin>>n;

    cout<<fibo(n);
}