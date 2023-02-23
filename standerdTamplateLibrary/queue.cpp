//First in first out
#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string> q;

    q.push("Ankur");
    q.push("Kanika");
    q.push("Akshat");
    q.push("Himanshu");
    cout<<"Size -->"<<q.size()<<endl;

    cout<<"First element -->"<<q.front()<<endl;
    q.pop();
    cout<<"First element -->"<<q.front()<<endl;
    cout<<"Size -->"<<q.size();
}