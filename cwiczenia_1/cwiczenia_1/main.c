#include <stdio.h>

int main(void);

int main(void) {
    int a1, b1, a2, b2;
    int W;

    printf("Podaj wspolczynniki rownania 1: a1, b1 >");
    (void)scanf("%d, %d", &a1, &b1);
    printf("Podaj wspolczynniki rownania 2: a2, b2 >");
    (void)scanf("%d, %d", &a2, &b2);
    W = a1 * b2 - a2 * b1;
    if (W != 0)
        printf("Uklad oznaczony.\n");
    else
        printf("Uklad nieoznaczony lub sprzeczny.\n");
    return 0;
}