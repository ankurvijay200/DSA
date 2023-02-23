// Number of notes require for a specific amount

#include<iostream>

using namespace std;

int main()
{
    int amount;
    cin>>amount;
    int hundred=0, fifty=0, twenty=0, one=0;

    switch (amount>=100)
    {
    case 1 :
        hundred = amount/100;
        amount = amount%100;
        cout<<"Hundred :"<<hundred<<endl;
        break;
    }

    switch (amount>=50)
    {
    case 1 :
        fifty = amount/50;
        amount = amount%50;
        cout<<"Fifty :"<<fifty<<endl;
        break;
    }

    switch (amount>=20)
    {
    case 1 :
        twenty = amount/20;
        amount = amount%20;
        cout<<"Twenty :"<<twenty<<endl;
        break;
    }

    switch (amount>=1)
    {
    case 1 :
        one = amount/1;
        cout<<"One :"<<one<<endl;
        break;
    }
}