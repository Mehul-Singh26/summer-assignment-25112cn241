#include <stdio.h>

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Duplicate elements are: ");

    for(int i = 0; i < n; i++) {
        int count = 1;

        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }

        int alreadyPrinted = 0;
        for(int k = 0; k < i; k++) {
            if(arr[k] == arr[i]) {
                alreadyPrinted = 1;
                break;
            }
        }

        if(count > 1 && !alreadyPrinted)
            printf("%d ", arr[i]);
    }

    return 0;
}