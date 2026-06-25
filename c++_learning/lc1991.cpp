#include<iostream>
#include<vector>
using namespace std;
int findMiddleIndex(vector<int>& nums)
    {
        long long sum1=0,sum2=0;
        int left=0,right=nums.size()-1;
        int mid=left+(right-left)/2;
        while(left<right){
            for(int i=left;i<mid;i++)
            sum1+=nums[i];
        for(int j=mid+1;j<=right;j++)
        sum2+=nums[j];
        if(sum1==sum2)
        return left+1;
        else if(sum1<sum2)
        left=mid+1;
        else 
        right=mid;
        }
        return -1;
    }
int main(){
    vector<int> nums={2,3,-1,8,4};
    int r=findMiddleIndex(nums);
    cout<<r<<endl;
}