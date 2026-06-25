#include<stdio.h>
#include<string.h>
#include<unistd.h>                                                                                             // Header file to use (sleep) function
struct book{
    int id;
char name[100];
char author[100];
float price;
}s[10000];
void clearBuffer(){
    int c;
    while((c=getchar()) !='\n' && c!=EOF);
}
int main(){
    char choice;
    int a=0,count =2;
    printf("\t\t\t\t\t\t\t Welcome to CCET LIBRARY \n\n\n");
    s[0].price=449.00;
    s[0].id=1;
    strcpy(s[1].name, "Don Quixote");
    strcpy(s[1].author, "Miguel de Cervantes");
    s[1].price=461.00;
    s[1].id=2;
    while(1){
    printf("Press 'a'/'A' to add any book\n");
    printf("Press 'r'/'R' to remove or withdraw any book\n");
    printf("Press 'd'/'D' to display all the books\n");
    printf("Press 's'/'S' to search any book by ID\n");
    printf("Response:");
    strcpy(s[0].name, "The Catcher in the Rye");
    strcpy(s[0].author, "J.D. Salinger");
    scanf(" %c",&choice);
    clearBuffer();
    if(choice=='S' || choice=='s'){
        int id, found =0;
        if(a>0){
        printf("Since you have already added %d book in the library,\n",a);
        printf("\n");
        sleep(3);                                                                                             //for delay of 3 seconds
        printf("Please enter the ID of the book\n");
        scanf("%d",&id);
    for (int i = 0; i < count; i++) {
        if (s[i].id == id) {
            printf("Book Found!\n");
            printf("Book ID: %d\nTitle: %s\nAuthor: %s\nPrice: %.2f\n",
                   s[i].id, s[i].name, s[i].author, s[i].price);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Book not found!\n");
    }
    else{
        printf("Since, you havn't added any book\n");
        printf("So, we have two books already in the library with id's: 1 and 2; So you can use this feature without any problem\n");
        printf("Please enter the ID of the book\n");
        scanf("%d",&id);
    for (int i = 0; i < count; i++) {
        if (s[i].id == id) {
            printf("Book Found!\n");
            printf("Book ID: %d\nTitle: %s\nAuthor: %s\nPrice: %.2f\n",
                   s[i].id, s[i].name, s[i].author, s[i].price);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Book not found!\n");
    }
}
else if(choice=='a' || choice=='A'){
    int t;
    printf("In order, to add a book \n");
    printf("Please enter the details in the respective order\n");
    sleep(3);
    printf("How many books do you want to add to the library\n");
    scanf("%d",&t);
    while(t--){
        printf("\nEnter book ID: ");
    scanf("%d", &s[count].id);
    getchar(); 

    printf("Enter book title: ");
    fgets(s[count].name,100,stdin);

    printf("Enter author name: ");
    fgets(s[count].author,100,stdin);

    printf("Enter book price: ");
    scanf("%f", &s[count].price);

    (count)++;
    a++;
    printf("Book added successfully!\n");
    }
}
else if(choice=='r' || choice=='R'){
    int t;
    printf("In order to remove or withdraw a book\n");
    printf("Please enter the details in the respective order\n");
    sleep(3);
    printf("How many books do you want to remove from the library\n");
    scanf("%d",&t);
    while(t--){
        int id, found = 0;
    printf("\nEnter Book ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (s[i].id == id) {
            for (int j = i; j < count - 1; j++) {
                s[j] = s[j + 1];
            }
            (count)--;
            printf("Book deleted successfully!\n");
            found = 1;
            break;
    }
}
}
}
else if(choice=='d' || choice=='D'){
    if (count == 0) 
        printf("\nNo books in the library.\n");

    printf("\n--- Library Books ---\n");
    for (int i = 0; i < count; i++) {
        printf("\nBook ID: %d", s[i].id);
        printf("\nTitle: %s", s[i].name);
        printf("\nAuthor: %s", s[i].author);
        printf("\nPrice: %.2f\n", s[i].price);
    }
}
printf("-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-");
    printf("\n\n");
    }
return 0;
}