#include<stdio.h>
void swap(int *a, int *b);
void swap(int *a, int *b){
    int temp;
    printf("before swap\n%d %d\n",*a,*b);
    temp = *a;
    *a = *b;
    *b = temp;
    printf("after swap \n%d %d",*a,*b); 
}
int main(){
    int a,b;
    printf("enter the numbers , you want to swap");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    return 0;
}