#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d;

    d.push_back(10);
    d.push_front(20);
    d.push_front(30);
    d.push_back(5);

    for(int i:d){
        cout<<i<<" ";
    }

    cout<<endl<<"Size of deque -->"<<d.size();

    cout<<endl<<"Element at 2nd index -->"<<d.at(2);

    cout<<endl<<"Front -->>"<<d.front()<<" Back -->"<<d.back();

    cout<<endl<<"isEmpty -->"<<d.empty();

    cout<<endl<<"Before erase -->";
    for(int i:d){
        cout<<i<<" ";
    }

    d.erase(d.begin(), d.begin()+1);

    cout<<endl<<"After erase -->";
    for(int i:d){
        cout<<i<<" ";
    }
}