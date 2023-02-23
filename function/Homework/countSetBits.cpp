#include<iostream>

using namespace std;

int setBits(int n){
    int count = 0;
    while (n)   
    {
        
        int bit = n&1;
        if(bit) count++;
        n = n>>1;
    }
    return count;
}

int main(){
    int a,b;
    cin>>a>>b;

    cout<<setBits(a)+setBits(b);
}