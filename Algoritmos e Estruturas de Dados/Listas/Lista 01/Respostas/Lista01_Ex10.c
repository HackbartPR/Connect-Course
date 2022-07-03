#include <stdio.h>
#include <math.h>

int main() {

    int x1 = 0;
    printf("DIGITE DA ABSCISSA DO PRIMEIRO PONTO [X1]: ");
    scanf("%d", &x1);

    int y1 = 0;
    printf("DIGITE DA ORDENADA DO PRIMEIRO PONTO [Y1]: ");
    scanf("%d", &y1);

    int x2 = 0;
    printf("\nDIGITE DA ABSCISSA DO SEGUNDO PONTO [X2]: ");
    scanf("%d", &x2);

    int y2 = 0;
    printf("DIGITE DA ORDENADA DO SEGUNDO PONTO [Y2]: ");
    scanf("%d", &y2);

    double distance = sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));
    printf("\nA DISTANCIA ENTRE OS PONTOS (%d,%d) E (%d,%d): %.2lf\n\n", x1,y1,x2,y2,distance);

    return 0;
}
