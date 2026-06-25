#include <stdio.h> 
int main()
{
    int b,d,w;
    printf("Welcome to ABC Bank\n");
    printf("Enter 1 for cash deposit\n");
    printf("Enter 2 for cash withdrawl\n");
    scanf("%d",&b);
    if(b==1){
        printf("Enter amount to be deposited\n");
        scanf("%d",&d);
        printf("Your amount is deposited, your final amount is %d",d);
        printf("Thank you for using our services\n");
    }
    else if(b==2){
         printf("Enter amount to be withdrawled\n");
        scanf("%d",&w);
        printf("Your amount is deposited, your final amount is %d\n",d-w);
        printf("Thank you for using our services\n");
    }
    else{
        printf("Option not included in our services,We are sorry for this\n");
    }
    return 0;
}