#include <stdio.h>

int main() {
    char str[100], maxChar;
    int i, j, count, maxCount = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        count = 0;

        for (j = 0; str[j] != '\0'; j++) {
            if (str[i] == str[j])
                count++;
        }

        if (count > maxCount && str[i] != ' ' && str[i] != '\n') {
            maxCount = count;
            maxChar = str[i];
        }
    }

    printf("Maximum Occurring Character: %c\n", maxChar);
    printf("Frequency: %d\n", maxCount);

    return 0;
}