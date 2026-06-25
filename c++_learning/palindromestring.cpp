#include<iostream>
#include<string>
using namespace std;
int main(){
    string hell="helllleh";
    int st=0,e=hell.size()-1;
    while(st<e){
        if(hell[st]!=hell[e]){
        cout<<"NO!"<<endl;
        return 0;
    }
        else{
            e--;
            st++;
        }
    }
    cout<<"YES!"<<endl;
    return 0;
}