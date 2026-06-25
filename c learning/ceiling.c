#include <stdio.h>

int main() {
	// your code goes here
    int t;
    scanf("%d",&t);
    while(t--){
        int n,x;
        scanf("%d%d",&n,&x);
        if(n%6!=0)
        printf("%d\n",((n+5)/6)*x);//here, (n+5) is termed as ceiling and this work least integer function...
        else
        printf("%d\n",(n*x)/6);
    }
    return 0;
}
