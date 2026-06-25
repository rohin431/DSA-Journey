#include <stdio.h>

int freq[1000001];   // adjust size as per constraints

int main(){
    int n,x;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&x);
        freq[x]++;
    }

    for(int i=0;i<=1000000;i++){
        while(freq[i]--){
            printf("%d\n",i);
        }
    }
    return 0;
}
