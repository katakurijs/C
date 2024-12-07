#include <stdio.h>

int fact(int n) {
    if (n>1) return n * fact(n-1);
    else return 1;
}

int main() {
    int n;
    printf("Entrer un nombre n: ");
    scanf("%d", &n);
    printf("\nLe factorielle du %d est: %d", n, fact(n));

    return 0;
}