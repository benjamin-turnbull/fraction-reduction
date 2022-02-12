#include <stdio.h>

int main(void) {

    int num, den, m, n, r;

    printf("Enter a fraction: ");
    scanf("%d/%d", &num, &den);

    m = num;
    n = den;

    while (n != 0) {
        r = m % n;
        m = n;
        n = r;
    }

    num = num / m;
    den = den / m;

    printf("Fraction in lowest terms: %d/%d", num, den);

    return 0;
}