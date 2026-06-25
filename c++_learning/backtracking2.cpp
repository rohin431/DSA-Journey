#include<iostream>
using namespace std;
int A[5];
void k_string(int n,int k)
{
    if(n<1){
    for(int i=0;i<5;i++){
        cout<<A[i];
    }
    cout<<endl;
}else{
        for(int j=0;j<k;j++){
            A[n-1]=j;
            k_string(n-1,k);
        }
    }
}
int main(){
k_string(5,2);
}