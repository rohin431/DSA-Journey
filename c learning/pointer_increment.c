#include<stdio.h>
int main(){
    int price = 20;
    int *ptr = &price;
    printf("%d\n",*ptr);
    ptr++;
    printf("%d",*ptr);
    return 0;

}