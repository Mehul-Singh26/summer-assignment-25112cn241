#include <stdio.h>

struct Item {
    int id;
    char name[30];
    int qty;
    float price;
};

int main() {
    struct Item item[100];
    int n = 0, choice, i;

    do {
        printf("\n1.Add Item\n2.Display Items\n3.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter ID: ");
                scanf("%d", &item[n].id);
                printf("Enter Name: ");
                scanf("%s", item[n].name);
                printf("Enter Quantity: ");
                scanf("%d", &item[n].qty);
                printf("Enter Price: ");
                scanf("%f", &item[n].price);
                n++;
                break;

            case 2:
                printf("\nID\tName\tQty\tPrice\n");
                for (i = 0; i < n; i++) {
                    printf("%d\t%s\t%d\t%.2f\n",
                           item[i].id,
                           item[i].name,
                           item[i].qty,
                           item[i].price);
                }
                break;

            case 3:
                break;

            default:
                printf("Invalid Choice!\n");
        }
    } while (choice != 3);

    return 0;
}