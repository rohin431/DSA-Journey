#include<iostream>
using namespace std;
int help(int arr[]){
int start = 0, end = 3;
    int mid = start + (end-start) / 2;
    while (start <= end)
    {
        if (arr[mid+1]<arr[mid])
        {
            return mid;
        }
        if (2 > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end-start) / 2;
    }
    return -1;
}
int main(){
    int a[4]={0,10,5,2};
    cout<<help(a);
}