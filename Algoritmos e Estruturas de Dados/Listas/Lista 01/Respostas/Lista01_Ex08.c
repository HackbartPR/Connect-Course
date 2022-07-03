#include <stdio.h>

#define FIRST_WEIGHT 1
#define SECOND_WEIGHT 2
#define THIRD_WEIGHT 3

int main() {

    int firstGrade = 0;
    printf("PRIMEIRA NOTA: ");
    scanf("%d", &firstGrade);

    int secondGrade = 0;
    printf("SEGUNDA NOTA: ");
    scanf("%d", &secondGrade);

    int thirdGrade = 0;
    printf("TERCEIRA NOTA: ");
    scanf("%d", &thirdGrade);

    float average = (firstGrade * FIRST_WEIGHT + secondGrade * SECOND_WEIGHT + thirdGrade * THIRD_WEIGHT) / (FIRST_WEIGHT + SECOND_WEIGHT + THIRD_WEIGHT);
    printf("MEDIA PONDERADA: %.2f", average);

    return 0;
}
