#include<stdio.h>
#include<unistd.h>
#include<time.h>
int main(void){
    time_t now= time(NULL);
    printf("%d\n",now);
    clock_t start,end;
    start =clock();
    for(int i = 0;i<1000000000;i++){}
    end = clock();
    double total =(double)(end-start)/CLOCKS_PER_SEC;
    printf("%fseconds\n",total);
    return 0;
}