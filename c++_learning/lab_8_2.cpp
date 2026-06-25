#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream file("data.txt",ios::app);
    if(!file){
        cout<<"File not found"<<endl;
        return 0;
    }
    string text;
    cout<<"enter text to append:";
    getline(cin,text);
    file<<text<<endl;
    cout<<"Data appended successfully"<<endl;
    file.close();
    return 0;
}