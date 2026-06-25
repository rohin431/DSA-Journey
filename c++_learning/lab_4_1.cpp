#include<iostream>
using namespace std;
class bank{
    private:
    int balance;
    string name;
    int accountNo;
    public:
    bank(){
        balance=2500;
        name="UNKNOWN";
        accountNo=1234567890;
    }
    void deposit(){
        int a;
        cout<<"Enter your amount to deposit"<<endl;
        cin>>a;
        balance+=a;
    }
    void withdraw(){
        int w;
        cout<<"Enter the amounrt you want to withdraw"<<endl;
        cin>>w;
        if(balance>=w+2500)
        balance-=w;
        else
        cout<<"This withdraw will lead to insufficient bank balance"<<endl;    
    }
    void balanceCheck(){
        if(balance<2500)
        cout<<"Insufficient Balance"<<endl;
        else
        cout<<"Your balance amount is sufficient"<<endl;
        }
    void interest(){
        float a=(8*balance)/100;
        cout<<"As per your account balance your monthly interest is: "<<a<<endl;
        cout<<"So,the total Account Balance is: "<<balance+a<<endl;
    } 
    };
int main(){
    bank s1;
    bank* ptr = &s1;
    int choice;
    cout<<"1.To Deposit Cash"<<endl;
    cout<<"2.To Withdraw Cash"<<endl;
    cout<<"3.To check monthly interest"<<endl;
    cout<<"4.To check balance"<<endl;
    cout<<"5.To exit"<<endl;
    cin>>choice;
    switch (choice) {
        case 1:
        ptr->deposit();
        break;
        case 2:
        ptr->withdraw();
        break;
        case 3:
        ptr->interest();
        break;
        case 4:
        ptr->balanceCheck();
        break;
        case 5:
        exit;
        break;
        default:
        cout<<"Not a Valid Input"<<endl;
    }

    return 0;
}