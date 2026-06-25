#include<stdio.h>
void square(int a);//function declaration
void square(int a){//FUNCTION definition
    printf("%d",a*a);
}
int main(){
    int n;
    printf("enter the number you want the square of");
    scanf("%d",&n);
    square(n);  //function calling
    return 0;
}