#include<stdio.h>
void square(int side);
void square(int side){
    printf("area of square = %d\n",side*side);
}
int main(){
    int a;
    printf("enter theside of the square");
    scanf("%d",&a);
    square(a);
    return 0;
}