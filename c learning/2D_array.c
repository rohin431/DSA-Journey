#include<stdio.h>
void startTable(int arr[][10],int n,int a,int number);
void startTable(int arr[][10],int n, int a, int number){
    for(int i = 0;i<a;i++){
        arr[n][i] = number*(i+1);
    }
}
int main(){
    int tables[2][10];
    startTable(tables,0,10,2);
    startTable(tables,1,10,3);
    printf("TABLE OF 2:\n");
    for(int i= 0;i<10;i++){
        printf("2X%d=%d\n",i+1, tables[0][i]);
    }
    printf("TABLE OF 3:\n");
    for(int i=0;i<10;i++)
    printf("3X%d=%d\n",i+1,tables[1][i]);
    return 0;
}