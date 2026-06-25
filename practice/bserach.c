#include<stdio.h>
int main(){
    int a[100],size,mid,left,right,key;
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    scanf("%d",&a[i]);
    scanf("%d",&key);
    left=0;
    right=size-1;
    while(left<=right){
        mid=(right+left)/2;
        if(a[mid]== key)
        printf("%d",mid);
        if(key<a[mid])
        right=mid-1;
        else
        left=mid+1;
    }
    return 0;
}