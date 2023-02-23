#include<iostream>

using namespace std;

int main(){
    int n=1;

    while (n)
    {
        switch (n)
        {
            case '1':
                cout<<"char";
                break;
            case 1 : 
                cout<<"Num";
                break;
            default:
                cout<<"default";
        }
        exit(0);
    }
    
}