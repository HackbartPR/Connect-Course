#include <stdio.h>
#include <stdlib.h>

int strlen(char s[]);
void strcpy(char *newString, char *baseString);
void strupr(char newString[], char baseString[]);
void strcat(char *resultString, char *firsString, char *secondString);
int strpos(char string[], char caracter);

int main()
{
    //char name[] = "Facil";
    //char lastName[] = "Mente";
    //char newName[50];

    //printf("Lenght: %d\n", strlen(name));

    //strcpy(newName, name);
    //printf("Nova String: %s", newName);

    //strupr(newName, name);
    //printf("Maiuscula String: %s", newName);

    //strcat(name, lastName);
    //printf("Concatenacao String: %s", name);

    char name[] = "garlos cuilherme";
    printf("%d", strpos(name, 'c'));

    return 0;
}

void strcpy(char *newString, char *baseString){
    int length = strlen(baseString);

    for(int i=0; i <= length; i++){
        newString[i] = baseString[i];
    }
}

int strlen(char *s){
    int length = 0;
    int i = 0;

    while(s[i] != 0){
        length++;
        i++;
    }

    length++; //PARA ADICIONAR O ESPAÇO DO /0
    return length;
}

void strupr(char newString[], char baseString[]){
    int length = strlen(baseString);

    for(int i=0; i<=length +1; i++){
        if(baseString[i] >= 97 && baseString[i] <= 122) newString[i] = baseString[i] - 32;
        else if(baseString[i] == ' ') newString[i] = baseString[i];
        else if(baseString[i] >= 65 && baseString[i] <= 90) newString[i] = baseString[i];
    }
}

void strcat(char *resultString, char *firsString, char *secondString){
    int startLength = strlen(firsString);
    int baseLength = (startLength + strlen(secondString))-1; //RETIRANDO O /0 DE UMA STRING

    //RESULTSTRING REFEBE TODO O CONTEUDO DA PRIMEIRA STRING
    strcpy(resultString, firsString);

    for(int i = startLength -1; i < baseLength; i++){
        resultString[i] = secondString[i - (startLength-1)];
    }
}

int strpos(char string[], char caracter){
    int lenght = strlen(string);
    int position = -1;

    for(int i=0; i <= lenght; i++)
        if(string[i] == caracter) position = i;

    return position;
}

