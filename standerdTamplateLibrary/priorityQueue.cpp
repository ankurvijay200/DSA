#include<iostream>
#include<queue>

using namespace std;

int main(){
    priority_queue<int> maxi; //---max heap---
    priority_queue<int, vector<int>, greater<int> > mini; //---min heap---

    maxi.push(10);
    maxi.push(30);
    maxi.push(20);
    maxi.push(40);

    mini.push(100);
    mini.push(300);
    mini.push(200);
    mini.push(400);

    cout<<"Max heap -->";
    int n = maxi.size();
    for (int i = 0; i < n; i++)
    {
         cout<<maxi.top()<<" ";
         maxi.pop();
    }
    
    cout<<endl<<"Min heap -->";
    int m = mini.size();
    for (int i = 0; i < n; i++)
    {
         cout<<mini.top()<<" ";
         mini.pop();
    }

    cout<<endl<<"Max heap isEmpty -->"<<maxi.empty();
    cout<<endl<<"Min heap isEmpty -->"<<mini.empty();
}