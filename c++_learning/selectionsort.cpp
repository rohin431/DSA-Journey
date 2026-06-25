#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={10,30,44,21,79,45};
    for(int i=0;i<5;i++){
        int min=i;
        for(int j=i+1;j<6;j++){
            if(arr[min]>arr[j])  
               min=j;
        }
        swap(arr[i],arr[min]);
    }
for(int i=0;i<6;i++){
    cout<<arr[i]<<endl;
}
}
//use when array is small or when there is space constraints
//time Complexity:O(n2)
//space complexity:O(1)
//Unstable Algotithm
