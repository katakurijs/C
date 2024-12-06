#include <stdio.h>
#include <stdlib.h>

int *saisie(int n) {
    int *tab = (int*)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++) {
        printf("\nSaisir la valeur n° T[%d]:", i+1);
        scanf("%d", tab + i);
    }
    return tab;
}

void afficher(int *tab, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d \t", *(tab + i));
    }
}

int *inverser(int *tab, int n) {
    int temp;
    for (int i = 0; i < n/2; i++) {
        temp = *(tab + i);
        *(tab + i) = *(tab + (n - i - 1));
        *(tab + (n - i - 1)) = temp;
    }
    return tab;
}

int *combine (int *tab1, int *tab2, int n1, int n2) {
    tab1 = (int*)realloc(tab1, (n1+n2)*sizeof(int));
    for (int i = n1+1; i < n2; i++) {
        *(tab1 + i) = *(tab2 - n1 + i);
    }
    return tab1;
}

int main() {
    int n1;
    printf("\nSaisir la taille du tableau 1: ");
    scanf("%d", &n1);
    int *tab1 = saisie(n1);
    printf("\n Affichage du tableau \n");
    afficher(tab1, n1);
    printf("\n Tableau inversée \n");
    tab1 = inverser(tab1, n1);
    afficher(tab1, n1);
    int n2;
    printf("\nSaisir la taille du tableau 2: ");
    scanf("%d", &n2);
    int *tab2 = saisie(n2);
    printf("\n Affichage du tableau \n");
    afficher(tab2, n2);
    printf("\n Tableau inversée \n");
    tab2 = inverser(tab2, n2);
    afficher(tab2, n2);
    printf("\n Tableau 1 et 2 combined \n");
    tab1 = combine(tab1, tab2, n1, n2);
    afficher(tab1, n1+n2);
}