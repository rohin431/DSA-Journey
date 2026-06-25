#include<stdio.h>
int fact(int n);
int fact(int n){
    if (n==1)//base case that stops recursion....
    return 1;
    int factNm1 =fact(n-1);
    int factn = factNm1*n;
    return factn;
}
int main(){
    int p;
    printf("enter the number whose factorial you want to find");
    scanf("%d",&p);
    printf("factorial = %d",fact(p));
    return 0;

}