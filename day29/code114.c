#include <stdio.h>

int main() {
    int arr[100], n = 0, i, choice, pos, value;

    do {
        printf("\n1.Create\n2.Display\n3.Insert\n4.Delete\n5.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter size: ");
                scanf("%d", &n);
                printf("Enter elements:\n");
                for (i = 0; i < n; i++)
                    scanf("%d", &arr[i]);
                break;

            case 2:
                printf("Array: ");
                for (i = 0; i < n; i++)
                    printf("%d ", arr[i]);
                printf("\n");
                break;

            case 3:
                printf("Enter position and value: ");
                scanf("%d%d", &pos, &value);
                if (pos >= 0 && pos <= n) {
                    for (i = n; i > pos; i--)
                        arr[i] = arr[i - 1];
                    arr[pos] = value;
                    n++;
                }
                break;

            case 4:
                printf("Enter position: ");
                scanf("%d", &pos);
                if (pos >= 0 && pos < n) {
                    for (i = pos; i < n - 1; i++)
                        arr[i] = arr[i + 1];
                    n--;
                }
                break;

            case 5:
                break;

            default:
                printf("Invalid Choice!\n");
        }
    } while (choice != 5);

    return 0;
}