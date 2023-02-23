//work as doubly linked list
#include<iostream>
#include<list>

using namespace std;

int main(){
    list<int> l;
    list<int> n(5, 100);

    for(int i : n){
        cout<<i<<" ";
    }
    cout<<endl;

    l.push_back(10);
    l.push_front(20);
    l.push_front(30);
    l.push_front(40);


    for(int i : l){
        cout<<i<<" ";
    }
    cout<<endl;

    l.pop_back();
    l.pop_front();

    for(int i : l){
        cout<<i<<" ";
    }
    cout<<endl;

    l.erase(l.begin());
    for(int i : l){
        cout<<i<<" ";
    }
}