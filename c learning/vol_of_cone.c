#include<stdio.h>
int main(){
    float rad;
    float h;
    printf("Enter the radius and height");
    scanf ("%f",&rad);
    scanf ("%f",&h);
    printf("volume of cone  = %f",(3.14*rad*rad*h)/3);
    return 0;
}