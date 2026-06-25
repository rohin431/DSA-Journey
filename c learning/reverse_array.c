#include<stdio.h>
void reverse(int arr[],int n);
void reverse(int arr[],int n){
    int _arr[n];
    for(int i = 0;i<n;i++){
        _arr[i] = arr[n-(i+1)];
        printf("%d\n",_arr[i]);
    } 
}
int main(){
    int arr[] = {1,2,43,5,6,87,9};
    reverse(arr,7);
    return 0;
}