#include<iostream>
#include<vector>
using namespace std;
vector<int>wavePrint(vector<vector<int>> arr,int nRows,int mCols){
    vector<int>ans;
    for(int col=0;col<mCols;col++){
        if(col&1){
            for(int row=nRows-1;row>=0;row--){
                ans.push_back(arr[row][col]);
            }
        }
        else{
            for(int row=0;row<nRows;row++){
                ans.push_back(arr[row][col]);
            }
        }
        }
        return ans;
    }
    int main(){
       vector<vector<int>>hell={{1,2},{3,4}};
        vector<int>ans=wavePrint(hell,2,2);
        for(int i=0;i<4;i++)
        cout<<ans[i]<<" ";
        return 0;
    }