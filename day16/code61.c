#include <stdio.h>

int main() {
    int n, sum1 = 0, sum2 = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr1[n];

    printf("Enter elements of first array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
        sum1 += arr1[i];
    }

    int arr2[n - 1];

    printf("Enter elements of second array (one element missing): ");
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &arr2[i]);
        sum2 += arr2[i];
    }

    printf("The missing number is: %d\n", sum1 - sum2);

    return 0;
}