#include <stdio.h>

#define GRADE_TO_PASS 7
#define GRADE_TO_TRY 5
#define GRADE_TO_FAIL 4
#define NUMBER_OF_PROVE 3

int main(){

    int identification = 0;
    printf("DIGITE O NUMERO DE IDENTIFICACAO DO ALUNO: ");
    scanf("%d", &identification);

    printf("\nDIGITE AS NOTAS DAS RESPECTIVAS AVALIACOES: \n");

    float firstGrade = 0;
    printf("AVALIACAO 01: ");
    scanf("%f", &firstGrade);

    float secondGrade = 0;
    printf("AVALIACAO 02: ");
    scanf("%f", &secondGrade);

    float thirdGrade = 0;
    printf("AVALIACAO 03: ");
    scanf("%f", &thirdGrade);

    float average = (firstGrade + secondGrade + thirdGrade) / NUMBER_OF_PROVE;

    if(average >= GRADE_TO_PASS){
        printf("\nID: %d MEDIA: %.2f SITUACAO: APROVADO", identification, average);
        return 0;
    }else if(average >= GRADE_TO_TRY){
        printf("\nID: %d MEDIA: %.2f SITUACAO: RECUPERACAO", identification, average);
        return 0;
    }else
        printf("\nID: %d MEDIA: %.2f SITUACAO: REPROVADO", identification, average);

    return 0;
}
