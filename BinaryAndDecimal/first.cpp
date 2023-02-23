//number to binary converter.
/* for bit :-
    n |  n/2 = a  | r
      |           |
    7 |  7/2 = 3  | 1
    3 |  3/2 = 1  | 1
    1 |  1/2 = 0  | 1
*/
#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int ans = 0;
    int i = 0;

    while (n!=0)
    {
        int bit = n & 1;
        ans = (bit * pow(10,i)) + ans;

        i++;
        n = n>>1;
    }

    cout <<ans<<endl;  
}