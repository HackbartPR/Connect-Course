#include <stdio.h>
#include <stdlib.h>

int strlen(char *s);
void strcat(char *resultString, char *firsString, char *secondString);
void strcpy(char *newString, char *baseString);
void verifyEndPoint(char *str);
void strupr(char newString[], char baseString[]);
int countVogals(char *str);
int countWords(char *text);
int findWord(char *text, char *word);
void findCountWords(char *text);

#define _TAM 21

int main()
{
    //char firstName[_TAM];
    //char lastName[_TAM];
    //char catName[2 * _TAM];
    //char nameUPR[_TAM];

    //LEITURA DE DADOS
    //printf("DIGITE A PRIMEIRA STRING: ");
    //gets(firstName);

    //printf("DIGITE A SEGUNDA STRING: ");
    //gets(lastName);

    //EXECUTA A CONCATENACAO
    //strcat(catName, firstName, lastName);

    //IMPRIME A VARIAVEL CONCATENADA
    //printf("CONCATENADO: %s\n\n", catName);

    //ESCREVER TUDO EM MAIUSCULO
    //strupr(nameUPR, catName);
    //printf("MAIUSCULO: %s\n\n", nameUPR);

    //VERIFICA A QUANTIDADE DE VOGAIS
    //int numberVogals = countVogals(firstName);
    //printf("QUANTIDADE VOGAIS: %d\n\n", numberVogals);

    //char text[300];
    //printf("DIGITE UM TEXTO COM O MAXIMO DE 300 CARACTERES: ");
    //gets(text);

    //int amountWords = countWords(text);
    //printf("QUANTIDADE DE PALAVRAS: %d\n\n", amountWords);

    //char wordToFind[300];
    //printf("QUAL PALAVRA DESEJA ENCONTRAR: ");
    //gets(wordToFind);

    //int indexWord = findWord(text, wordToFind);
    //printf("INDICE DA PALAVRA ENCONTRADA: %d\n\n", indexWord);


    return 0;
}

void strcat(char *resultString, char *firsString, char *secondString){
    int startLength = strlen(firsString);
    int baseLength = (startLength + strlen(secondString))-1; //RETIRANDO O /0 DE UMA STRING

    //RESULTSTRING RECEBE TODO O CONTEUDO DA PRIMEIRA STRING
    strcpy(resultString, firsString);

    for(int i = startLength -1; i < baseLength; i++){
        resultString[i] = secondString[i - (startLength-1)];
    }
}

int strlen(char *s){
    int length = 0;
    int i = 0;

    while(s[i] != 0){
        length++;
        i++;
    }

    length++; //PARA ADICIONAR O ESPAÇO DO \0
    return length;
}

void strcpy(char *newString, char *baseString){
    int length = strlen(baseString);

    for(int i=0; i <= length; i++){
        newString[i] = baseString[i];
    }
}

void verifyEndPoint(char *str){
    int length = strlen(str);

    for(int i=0; i < length; i++){
        if(str[i] == '\0') printf("Possui End Point");
    }
}

int countVogals(char *str){
    int length = strlen(str);
    char newString[length];
    int count = 0;

    strupr(newString, str);

    for(int i=0; i < length; i++){
        if(newString[i] == 65 || newString[i] == 69 || newString[i] == 73 || newString[i] == 79 || newString[i] == 85) count++;
    }

    return count;
}

void strupr(char newString[], char baseString[]){
    int length = strlen(baseString);

    for(int i=0; i<=length +1; i++){
        if(baseString[i] >= 97 && baseString[i] <= 122) newString[i] = baseString[i] - 32;
        else if(baseString[i] == ' ') newString[i] = baseString[i];
        else if(baseString[i] == '\0') newString[i] = baseString[i];
        else if(baseString[i] == '\n') newString[i] = baseString[i];
        else if(baseString[i] >= 65 && baseString[i] <= 90) newString[i] = baseString[i];
    }
}

int countWords(char *text){
    int length = strlen(text);
    int count = 0;
    char lastCaracter;

    for(int i=0; i < length; i++){
        lastCaracter = text[i-1];

        if(lastCaracter != ' ' && lastCaracter != ',' && lastCaracter != '.' && lastCaracter != '!' && lastCaracter != '?' && lastCaracter != ';'){

            if(text[i] == ' ' || text[i] == ',' || text[i] == '.' || text[i] == '!' || text[i] == '?' || text[i] == ';' || text[i] == '\0')
                count++;
        }
    }

    return count;
}

int findWord(char *text, char *word){
    //ENCONTRA O TAMANHO DAS STRINGS
    int lengthText = strlen(text);
    int lengthWord = strlen(word);

    //CRIA NOVAS STRINGS
    char newText[lengthText];
    char newWord[lengthWord];

    //TRANSFORMA AS NOVAS STRINGS PARA MAIUSCULA
    strupr(newText, text);
    strupr(newWord, word);

    int result = -1;
    int countComplete = 0;

    //PERCORRE O VETOR
    for(int i=0; i < lengthText; i++){

        //A PRIMEIRA LETRA DA PALAVRA NO TEXTO
        if(newText[i] == newWord[0]){
            int countText = i+1;
            int countWord = 1;

            countComplete++;

            //A PARTIR DA PRIMEIRA PALAVRA ENCONTRADA, PERCORRER AS LETRAS SEGUINTES
            while(newText[countText] == newWord[countWord]){
                countComplete++;
                countText++;
                countWord++;
            }

            //SE A QUANTIDADE DE PALAVRAS IGUAIS FORAM IGUAL OU MAIOR QUE O TAMANHO DA PALAVRA SOLICITADA
            if(countComplete >= lengthWord-1) result = i;

        }
    }

    return result;
}

