#include<stdio.h>
int fab(int n);
int fab(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int fabNm1 = fab(n-1);
    int fabnm2 = fab(n-2);
    int fabN = fab(n-1)+fab(n-2);
    return fabN;
}
int main(){
    int p;
    printf("enter the number upto which you want to get the series");
    scanf("%d",&p);
    for(int i = 0;i<p;i++)
    printf("%d",fab(i));
    return 0;
}