#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 10, y = 20;
    int *p1;
    int *p2;

    p1 = &x;
    p2 = &y;

    printf("&X = %d\n", &x);
    printf("&Y = %d\n", &y);

    (*p1)++;

    system("pause");
    printf("\n");

    printf("A) X: %d\n", x);
    printf("B) Y: %d\n", y);
    printf("C) &X: %d\n", &x);
    printf("D) &Y: %d\n", &y);
    printf("E) P1: %d\n", p1);
    printf("F) P2: %d\n", p2);
    printf("G) *P1 + *P2: %d\n", *p1 + *p2);
    printf("H) *(&x): %d\n", *(&x));
    printf("I) &(*P2): %d\n",&(*p2));


    return 0;
}
