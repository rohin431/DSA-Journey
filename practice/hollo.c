#include<stdio.h>
int main(){
int nums[10],target;
    for(int i = 0;i<10;i++)
    scanf("%d",&nums[i]);
    scanf("%d",&target);
     for(int i = 0;i<10;i++){
        for(int j = i+1;j<10;j++){
            if(nums[i]+nums[j]==target)
        printf("[%d,%d]\n",i,j);
        }
     }
    return 0;
}