#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={4,7,2,1,0,3,6,54,33,76,67,12,34,43};
    for(int i=0;i<13;i++){
        for(int j=0;j<13-i;j++){
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
    for(int i=0;i<14;i++)
    cout<<arr[i]<<endl;
}
//time Complexity:O(n2)
//space complexity:O(1)
//stable Algorithm
