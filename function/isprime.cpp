#include<iostream>
using namespace std;
bool isPrime(int x){
    for (int i = 2; i <= x/2; i++)
    {
        if(x%i==0)
            return 0;
        else
            return 1;
    }
    
}

int main(){
    int n;
    cin>>n;

    bool result = isPrime(n);
    if(result)
        cout<<"Prime";
    else
        cout<<"Not Prime";
}