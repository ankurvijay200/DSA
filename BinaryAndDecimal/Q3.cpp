//Power of two
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n, ans;
    cin>>n;
    bool result=false;
    
    for(int i = 0 ; i<= 30 ; i++){
        ans = pow(2,i);

        if(ans == n)
        {
                result = true;
                break;
        }
    }
    cout<<result;
}