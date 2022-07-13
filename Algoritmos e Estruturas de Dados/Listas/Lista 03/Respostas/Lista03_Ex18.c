#include <stdio.h>

int main(){
    int choice = 0;
    int countStudents = 1;
    int countGrades = 1;

    do{
        printf("DIGITE %d%c NOTA DO %d%c ALUNO: ", countGrades,166,countStudents,167);
        float firstGrade = 0;
        scanf("%f", &firstGrade);

        countGrades++;

        printf("DIGITE %d%c NOTA DO %d%c ALUNO: ", countGrades,166,countStudents,167);
        float secondGrade = 0;
        scanf("%f", &secondGrade);

        float average = (firstGrade + secondGrade) / 2;

        printf(average >= 6 ? "\nO ALUNO %d ESTA APROVADO!" : "\nO ALUNO %d ESTA REPROVADO!", countStudents);

        countStudents++;
        countGrades = 1;

        printf("\n\nDESEJA VERIFICAR MAIS ALGUM ALUNO?\n");
        printf("DIGITE 1 PARA SIM\n");
        printf("DIGITE 2 PARA NAO\n");
        scanf("%d", &choice);

        system("cls");

    }while(choice == 1);

    return 0;
}
