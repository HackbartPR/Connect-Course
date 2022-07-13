#include <stdio.h>


int main(){

    int choice = 0;

    do{
        system("cls");
        printf("OLA MUNDO\n");

        printf("DESEJA SAIR DA APLICACAO?\n");
        printf("DIGITE 1 PARA SIM\n");
        printf("DIGITE 2 PARA NAO\n");
        scanf("%d", &choice);

    }while(choice == 2);

    return 0;
}
