#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v;

    cout<<"Capacity -->"<<v.capacity()<<endl;
    cout<<"Size -->"<<v.size()<<endl;
    cout<<endl;

    v.push_back(10);
    cout<<"Size -->"<<v.size()<<endl;
    cout<<"Capacity -->"<<v.capacity()<<endl;
    cout<<endl;

    v.push_back(20);
    cout<<"Size -->"<<v.size()<<endl;
    cout<<"Capacity -->"<<v.capacity()<<endl;
    cout<<endl;

    v.push_back(30);
    cout<<"Size -->"<<v.size()<<endl;
    cout<<"Capacity -->"<<v.capacity()<<endl;
    cout<<endl;

    cout<<"Element at 2nd index -->"<<v.at(2)<<endl;
    cout<<"Front -->"<<v.front()<<" Back -->>"<<v.back()<<endl;
    cout<<endl;

    cout<<"Before pop -->";
    for(int i : v){
        cout<<i<<" ";
    }

    cout<<endl;
    v.pop_back();

    cout<<"After pop -->";
    for(int i : v){
        cout<<i<<" ";
    }
    cout<<endl<<endl;

    vector<int> newCopy(v);
    cout<<"copy vector -->";
    for(int i : newCopy){
        cout<<i<<" ";
    }

    cout<<endl<<endl;
    v.clear();
    cout<<"After clear Size -->"<<v.size()<<endl;
    cout<<"After clear Capacity -->"<<v.capacity()<<endl;
    cout<<endl;
}