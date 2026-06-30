#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp[100];
    int n = 0, choice, i;

    do {
        printf("\n----- Employee Menu -----\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Employee ID: ");
                scanf("%d", &emp[n].id);

                printf("Employee Name: ");
                scanf("%s", emp[n].name);

                printf("Salary: ");
                scanf("%f", &emp[n].salary);

                n++;
                break;

            case 2:
                printf("\nID\tName\tSalary\n");

                for(i = 0; i < n; i++)
                    printf("%d\t%s\t%.2f\n",
                           emp[i].id,
                           emp[i].name,
                           emp[i].salary);

                break;

            case 3:
                printf("Program Ended.\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 3);

    return 0;
}