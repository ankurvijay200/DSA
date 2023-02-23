#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string> s;

    s.push("Ankur");
    s.push("Kanika");
    s.push("Akshat");
    s.push("Kartik");
    s.push("Himanshu");
    s.push("Kunal");

    cout<<"Size -->"<<s.size()<<endl;
    cout<<"Top -->"<<s.top()<<endl;
    s.pop();
    cout<<"Top -->"<<s.top()<<endl;

    cout<<"isEmpty -->"<<s.empty()<<endl;
    cout<<"Size -->"<<s.size();
}