#include <stdio.h>

void echange(int T[], int i, int min) {
    int temp = T[i];
    T[i] = T[min];
    T[min] = temp;
}

int search_min(int T[], int n, int i) {
    int min = i;
    for (int j = i; j < n; j++) {
        min = (T[j]<T[min])?j:min;
    }
    return min;
}

void tri(int T[], int n, int i) {
    if (i > n-2) {
        return;
    }
    else {
        int pos_min = search_min(T, n, i);
        echange(T, i, pos_min);
        return tri(T, n, i+1);
    }
}

void afficher(int T[], int n) {
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", T[i]);
    }
    
}

void saisie(int T[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Entrer la valeur %d", i+1);
        scanf("%d", &T[i]);
    }
}

int main() {
    int n;
    printf("Entrer la taille du tableau: ");
    scanf("%d", &n);
    int T[n];
    saisie(T, n);
    printf("\nTableau triée:\n");
    tri(T, n, 0);
    afficher(T, n);

    return 0;
}