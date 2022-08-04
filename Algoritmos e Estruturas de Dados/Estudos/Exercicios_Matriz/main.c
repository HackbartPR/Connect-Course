#include <stdio.h>
#include <stdlib.h>

#define _ALUNOS 3
#define _NOTAS 2

float averageMatrix(float matrix[][_NOTAS]);
void readMatrixAlunos(float matrix[][_NOTAS]);
void readMatrix(float matrix[][_NOTAS]);
void sumMatrix(float firstMatrix[][_NOTAS], float secondMatrix[][_NOTAS], float resultMatrix[][_NOTAS]);
void firstExercise();
void secondExercise();

int main()
{
    //firstExercise();
    secondExercise();

    return 0;
}

void firstExercise(){
    float matrix[_ALUNOS][_NOTAS];

    readMatrixAlunos(matrix);

    float average = averageMatrix(matrix);
    printf("MEDIA DA TURMA: %.2f", average);
}

void secondExercise(){
    float firstMatrix[_ALUNOS][_NOTAS];
    float secondMatrix[_ALUNOS][_NOTAS];
    float resultMatrix[_ALUNOS][_NOTAS];

    readMatrix(firstMatrix);
    printf("\n");
    readMatrix(secondMatrix);
    printf("\n");

    sumMatrix(firstMatrix, secondMatrix, resultMatrix);

    printf("VETOR RESULTADO: \n");
    for(int i=0; i < _ALUNOS; i++){
        for(int j=0; j < _NOTAS; j++){
            printf("RESULTADO [%.f,%.f]: %.1f\n",i,j,resultMatrix[i][j]);
        }
    }


}

float averageMatrix(float matrix[][_NOTAS]){
    int spaces = _ALUNOS * _NOTAS;
    float average = 0;

    for(int i=0; i < _ALUNOS; i++){
        for(int j=0; j < _NOTAS; j++) average += matrix[i][j];
    }

    average /= spaces;

    return average;
}

void readMatrixAlunos(float matrix[][_NOTAS]){

    for(int i=0; i < _ALUNOS; i++){
        for(int j=0; j < _NOTAS; j++){
            printf("DIGITE A %d NOTA DO %d ALUNO: ",j+1,i+1);
            scanf("%f", &matrix[i][j]);
        }
        printf("\n");
    }
}

void readMatrix(float matrix[][_NOTAS]){

    for(int i=0; i < _ALUNOS; i++){
        for(int j=0; j < _NOTAS; j++){
            printf("DIGITE O [%d,%d] VALOR: ",i,j);
            scanf("%f", &matrix[i][j]);
        }
    }
}

void sumMatrix(float firstMatrix[][_NOTAS], float secondMatrix[][_NOTAS], float resultMatrix[][_NOTAS]){
    for(int i=0; i < _ALUNOS; i++){
        for(int j=0; j < _NOTAS; j++){
            resultMatrix[i][j] = firstMatrix[i][j] + secondMatrix[i][j];
        }
    }
}
