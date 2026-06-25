#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>l;
    list<int>n(5,100);//list of size =5, with each element initialized with 100
    list<int>s(l);//this statement copies the list(l) in new list(s)
    cout<<"Printing n"<<endl;
    for(int i:n){
        cout<<i<<" ";
    }
    cout<<endl;
    l.push_back(1);
    l.push_front(2);
    for(int i:l)cout<<i<<" ";
    cout<<endl;
    l.erase(l.begin());
    cout<<"After Erase";
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Size of List->"<<l.size()<<endl;
}