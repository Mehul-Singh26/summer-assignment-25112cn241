#include <stdio.h>
#include <math.h>

int countDigits(int n) {
    int count = 0;
    while (n > 0) {
        count++;
        n /= 10;
    }
    return count;
}

int armstrong(int n) {
    int sum = 0, temp = n, rem;
    int digits = countDigits(n);  // get actual number of digits
    while (temp > 0) {
        rem = temp % 10;
        sum += pow(rem, digits);  // raise to power of digit count
        temp /= 10;
    }
    return (sum == n);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (armstrong(num))
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");
    return 0;
}