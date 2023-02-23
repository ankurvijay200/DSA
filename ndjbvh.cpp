#include<iostream>
using namespace std;
int main(){
    for( int i = 1; i < 5; i++ ){
        for( int j = 0; j < 5-i; j++){
            cout <<"  ";
        }
        for( int j = 0; j < 2 * i - 1; j++){
            cout <<"*";
        }
        cout << endl;
    }
    return 0;
}