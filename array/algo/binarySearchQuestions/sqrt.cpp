#include<iostream>
using namespace std;

int findSqrtInt(int N){
    int s = 0;
    int e = N;

    long long int mid = s + ( e - s)/2;
    long long int ans = -1;

    while (s<=e)
    {
        long long int square = mid * mid;

        if(square == N){
            return mid;
        }

        if(square < N){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + ( e - s)/2;
    }
    return ans;
}

double findSqrtDouble(int n, int precision){
    double factor = 1;
    double ans = findSqrtInt(n);

    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10 ;
        for (double j = ans; j*j < n; j=j+factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main(){
    int n;
    cin>>n;

    int precision;
    cin>>precision;

    cout<<findSqrtDouble(n, precision);
}