#include <stdio.h>
#include <string.h>

#define _MAX 10

int main(){

    char name[50];
    int age[_MAX];
    int younger = 0;

    char youngName[50];
    int youngAge = 0;

    for(int i=1; i <= _MAX; i++){
        printf("DIGITE O NOME DA %d%c PESSOA: ",i,166);
        scanf("%s", name);
        printf("DIGITE A IDADE DO(A) %s: ", name);
        scanf("%d", &age[i]);

        if(i == 1){
            youngAge = age[i];
            strcpy(youngName, name);
        }

        if(age[i] < youngAge){
            youngAge = age[i];
            strcpy(youngName, name);
        }
    }

    printf("\n%s E A PESSOA MAIS NOVA COM A IDADE DE %d\n",youngName, youngAge);

    return 0;
}
