#include <stdio.h>

int fibonacci(int n) {
    if (n==0) return 0;
    else if (n==1) return 1;
    else if (n > 1) return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int n;
    printf("Entrer un nombre n: ");
    scanf("%d", &n);
    printf("\nLes termes fibonacci inferieur ou égale à %d sont:\n", n);
    for (int i = 0; i <= n; i++) {
        printf("U(%d) = %d\n", i, fibonacci(i));
    }

    return 0;
}