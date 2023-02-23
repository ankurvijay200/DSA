/*  Set stores only unique elements or no repetations
    prints in sorted order.
*/
#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s;

    s.insert(10);
    s.insert(30);
    s.insert(20);
    s.insert(40);
    s.insert(40); //stores only unique values.

    cout<<"Print Set --> ";
    for(auto i : s){
        cout<<i<<" ";
    }

    //cout is use to check element is available or not.
    cout<<endl<<"30 is prasent or not --> "<<s.count(30)<<endl;

    s.erase(s.begin());
    cout<<"After Erase Set at begening --> ";
    for(auto i : s){
        cout<<i<<" ";
    }

    set<int> :: iterator it = s.begin();
    it++;
    s.erase(it);
    cout<<endl<<"After Erase Set at location --> ";
    for(auto i : s){
        cout<<i<<" ";
    }
}