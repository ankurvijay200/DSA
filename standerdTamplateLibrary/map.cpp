#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int, string> m;

    m[1] = "Ankur";
    m[2] = "Kanika";
    m[3] = "Akshat";
    m[4] = "Dimple";

    m.insert({5, "Kartik"});
    m.insert({6,"Anshu"});

    for(auto i : m){
        cout<< i.first<<" ";
    }
    cout<<endl;
    for(auto i : m){
        cout<< i.second<<" ";
    }

    cout<<endl;
    cout<<"Ankur is available or not "<<m.count(5)<<endl;

    auto it = m.find(4);
    for (auto i = it; i != m.end(); i++)
    {
        cout<<(*i).first<<" ";
    }

    cout<<endl<<"After erase ";
    m.erase(1);
    m.erase(2);
    for(auto i : m){
        cout<< i.first<<" ";
    }

    
    
}