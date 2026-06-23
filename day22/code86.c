#include <stdio.h>

int main() {
    char str[200];
    int words = 0, i = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if ((i == 0 && str[i] != ' ' && str[i] != '\n') ||
            (str[i] != ' ' && str[i - 1] == ' '))
            words++;
        i++;
    }

    printf("Number of words = %d\n", words);

    return 0;
}