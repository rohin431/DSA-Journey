#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>al;
    
    int sum[100]={0};
    int nums[]={-2,1,-3,4,-1,2,1,-5,4};
    int left=0;
    int right=8;
    for(int i=0;i<9;i++){
      al.push_back(nums[i]);
}
for(int i=0;i<al.size();i++){
    int maxVal=sum[0];
    for(int i=0;i<9;i++){
        if(maxVal<sum[i])
        maxVal=sum[i];
        cout<<sum[i]<<endl;
    }
    cout<<maxVal<<endl;
}
}