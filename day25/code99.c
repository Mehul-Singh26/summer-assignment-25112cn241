#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0, flag = 1;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            flag = 0;
            break;
        }
        i++;
    }

    if (flag)
        printf("Strings are Equal\n");
    else
        printf("Strings are Not Equal\n");

    return 0;
}