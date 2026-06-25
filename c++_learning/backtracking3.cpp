#include<iostream>
using namespace std;
bool **create2darr(int rows,int cols){
    bool **arr = new bool*[rows];
    for(int i=0;i<rows;i++){
        arr[i] = new bool[cols];
        for(int j=0;j<cols;j++) arr[i][j] = false;
    }
    return arr;
}
int getval(int (*A)[5],int i,int j,int L,int H){
    if(i<0 || i>=L||j<0||j>=H)
    return 0;
    else return A[i][j];
}
void findMaxBlock(int (*A)[5],int r,int c,int L,int H, int size,bool **cntarr,int &maxsize){
    if(r>=L || c>=H)
    return;
    cntarr[r][c]=true;
    size++;
    if(size>maxsize)maxsize=size;
    //search in eight directions
    int direction[][2]={{-1,0},{-1,-1},{0,-1},{1,-1},{1,0},{1,1},{0,1},{-1,1}};
    for(int i=0;i<8;i++){
        int newi=r+direction[i][0];
        int newj=c+direction[i][1];
        int val=getval(A,newi,newj,L,H);
        if(val>0 && (cntarr[newi][newj]==false)){
            findMaxBlock(A,newi,newj,L,H,size,cntarr,maxsize);
        }
    }
    cntarr[r][c]=false;
}
int getMaxOnes(int(*A)[5],int rmax,int colmax){
    int maxsize=0;
    int size=0;
    bool **cntarr=create2darr(rmax,colmax);
    for(int i=0;i<rmax;i++){
        for(int j=0;j<colmax;j++){
            if(A[i][j]==1)
            findMaxBlock(A,i,j,rmax,colmax,0,cntarr,maxsize);
        }
    }
    return maxsize;
}
int main(){
int zarr[][5]={{1,1,0,0,0},{0,1,1,0,0},{0,0,1,0,1},{1,0,0,0,1},{0,1,0,1,1}};
cout<<"number of maximum 1s are "<<getMaxOnes(zarr,5,5)<<endl;
return 0;
}