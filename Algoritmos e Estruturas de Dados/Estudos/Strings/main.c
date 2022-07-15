#include <stdio.h>
#include <stdlib.h>

int strlen(char s[]);
void strcpy(char newString[], char baseString[]);
void strupr(char newString[], char baseString[]);
void strcat(char newString[], char baseString[]);
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

void strcpy(char newString[], char baseString[]){
    int length = strlen(baseString);

    for(int i=0; i <= length + 1; i++){
        newString[i] = baseString[i];
    }
}

int strlen(char s[]){
    int length = 0;
    int i = 0;

    while(s[i] != 0){
        length++;
        i++;
    }

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

void strcat(char newString[], char baseString[]){
    int newLength = strlen(newString);
    int baseLength = newLength + strlen(baseString);

    printf("%d %d", newLength, baseLength);

    for(int i = newLength; i <= baseLength; i++)
        newString[i] = baseString[i - newLength];
}

int strpos(char string[], char caracter){
    int lenght = strlen(string);
    int position = -1;

    for(int i=0; i <= lenght; i++)
        if(string[i] == caracter) position = i;

    return position;
}

