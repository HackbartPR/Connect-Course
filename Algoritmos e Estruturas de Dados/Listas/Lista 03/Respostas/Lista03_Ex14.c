#include <stdio.h>


int main(){

    int choice = 0;

    do{
        system("cls");
        printf("OLA MUNDO\n");

        printf("DESEJA VISUALIZAR ESTA MENSAGEM NOVAMENTE?\n");
        printf("DIGITE 1 PARA SIM\n");
        printf("DIGITE 2 PARA NAO\n");
        scanf("%d", &choice);

    }while(choice == 1);

    return 0;
}
