#include <stdio.h>

struct Book {
    int id;
    char title[50];
    char author[50];
};

int main() {
    struct Book b[100];
    int n = 0, choice, i;

    do {
        printf("\n----- Library Menu -----\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &b[n].id);

                printf("Enter Title: ");
                scanf("%s", b[n].title);

                printf("Enter Author: ");
                scanf("%s", b[n].author);

                n++;
                break;

            case 2:
                printf("\nID\tTitle\tAuthor\n");
                for(i = 0; i < n; i++)
                    printf("%d\t%s\t%s\n",
                           b[i].id,
                           b[i].title,
                           b[i].author);
                break;

            case 3:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 3);

    return 0;
}