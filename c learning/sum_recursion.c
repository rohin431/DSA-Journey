#include<stdio.h>

// Function prototype
int sum(int count);

int main(){
    int n;
    printf(" enter the number upto which you want to add");
    scanf("%d",&n);
    printf("sum = %d", sum(n));
    return 0;
}

int sum(int count){
    if(count == 1)   
        return 1;

    int sumNm1 = sum(count - 1);   // Recursive call: sum of numbers till (count-1)
    int sumN = sumNm1 + count;     // Add current number
    return sumN;   // Return the result
}
