#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
int main(){
    ifstream fin("data.txt");
    string name;
    string number;
    if(!fin){
        cout<<"Enter opening file"<<endl;
        return 1;
    }
    cout<<left<<setw(20)<<"Name"<<right<<setw(15)<<"Telephone"<<endl;
    while(fin>>name>>number){
         cout<<left<<setw(20)<<name<<right<<setw(15)<<number<<endl;
    }
    fin.close();
    return 0;
}