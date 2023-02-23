#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(9);

    cout<<"5 is present or not : "<<binary_search(v.begin(), v.end(), 5)<<endl;
    
    cout<<"Lower bound : "<<lower_bound(v.begin(), v.end(), 5)-v.begin()<<endl; //print iterator of searching index
    cout<<"Upper bound : "<<upper_bound(v.begin(), v.end(), 5)-v.begin()<<endl; //print next iterator of searching index
    
    vector<int> n;
    n.push_back(1);
    n.push_back(5);
    n.push_back(3);
    n.push_back(2);
    n.push_back(4);

    sort(n.begin(), n.end());
    cout<<"After Sorted --> ";
    for(int i : n){
        cout<<i<<" ";
    }
}