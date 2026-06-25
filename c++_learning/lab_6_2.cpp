#include<iostream>
#include<string>
using namespace std;
class account{
    protected:
    string name;
    long long acc_no;
    string type;
    public:
    virtual void display(){
        cout<<"Customer Name:"<<name<<endl;
        cout<<"Account Number:"<<acc_no<<endl;
        cout<<"Account Type:"<<type<<endl;
    }
};
class current: public account{
    protected:
    int min;
    
};
class saving: public account{

};