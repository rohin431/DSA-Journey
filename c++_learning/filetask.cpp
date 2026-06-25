#include<iostream>
#include<fstream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    ofstream fout;
    fout.open("filetask.txt");
    vector<int>a={1,2,4,5,8,2};
    for(int i=0;i<6;i++){
     fout<<a[i]<<" ";
    }
    ifstream fin;
    fin.open("filetask.txt");
    int s;
    fin>>s;
    while(!fin.eof()){
     cout<<s<<" ";
    }
    fout<<endl;
    fout<<"Sorted Numbers:"<<endl;
    sort(a.begin(),a.end());
    for(int i=0;i<6;i++){
     fout<<a[i]<<" ";
    }
fin.close();
}