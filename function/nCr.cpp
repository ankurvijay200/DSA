#include<iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=1 ; i<=n ;i++){
        fact *= i;
    }
    return fact;
}

int nCr(int n , int r){
    int num = factorial(n);
    int den = factorial(r) * factorial(n-r);

    int result = num / den ;
    return result;
}

int main(){
    int n,r;
    cin>>n>>r;
    cout<<nCr(n,r);
    return 0;
}