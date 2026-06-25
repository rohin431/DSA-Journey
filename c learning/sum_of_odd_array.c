#include<stdio.h>
#include<string.h>
void sum_odd(int arr[],int size);
void sum_odd(int arr[],int size){
    int sum = 0;
    int i = 0; 
    while(i<size){
    if(arr[i]%2!=0){
        sum +=arr[i];
    }
    i++;
    }
    printf("%d",sum);
}
int main(){
    int size;
    int arr[]={1,3,4,2,5,9,7,6};
    printf("enter the size of the array");
    scanf("%d",&size);
    sum_odd(arr,size);
    return 0;
}