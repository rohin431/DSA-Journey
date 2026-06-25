#include<iostream>
#include<string>
using namespace std;
int main(){
char arr1[]={'a','b','\0','c','\0'};
string arr2="ab\0cd\0";
cout<<arr2<<endl;
for(int i=0;i<5;i++)
cout<<arr1[i]<<endl;
}