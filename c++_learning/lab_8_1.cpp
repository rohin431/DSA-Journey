#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream file("data.txt");
    if(!file){
        cout<<"File not found!"<<endl;
        return 0;
    }
    char ch;
    int characters=0,words=0,lines=0;
    while(file.get(ch)){
        cout<<ch;
        characters++;
        if(ch==' ' || ch=='\n')
        words++;
        if(ch=='\n')
        lines++;
    }
    if(characters>0)
    words++,lines++;
    cout<<"\nLines:"<<lines<<endl;
    cout<<"Words:"<<words<<endl;
    cout<<"Characters:"<<characters<<endl;
    file.close();
    return 0;
}