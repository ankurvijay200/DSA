//Complement of base 10 integer
#include<iostream>
using namespace std;

int main(){
    int n,m, mask=0 , ans;
    cin>>n;
    m=n;

    if(n!=0){
        while (m!=0)
        {
            mask = (mask << 1) | 1;
            m = m >> 1;
        }
        ans = (~n) & mask;
    }
    else{
        ans=0;
    }
    cout<<ans;
}