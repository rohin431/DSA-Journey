#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("enter the number you want the square of");
    scanf("%d",&n);
    printf("%f",pow(n,2));//library defined function with 'double' as retyrntype
    return 0;
}