#include <stdio.h>

#define _MAX_SMOKERS 2
#define _MAX_NORMAL 2

int main(){

    int smokersLeft = _MAX_SMOKERS;
    int normalLeft = _MAX_NORMAL;

    do{
        printf("DESEJA REALIZAR UMA RESERVA? ");
        printf("\nDIGITE 1 PARA RESERVA NA AREA DE FUMANTES: ");
        printf("\nDIGITE 2 PARA RESERVA NA AREA COMUM: \n");
        int choice = 0;
        scanf("%d", &choice);

        //RESERVA PARA AREA DE FUMANTES
        if(choice == 1){
            if(smokersLeft == 0){
                printf("INFELIZMENTE PARA A AREA DE FUMANTES ESTAMOS COM TODAS AS MESAS RESERVADAS, POSSO TE ALOCAR NA AREA COMUM? ");
                printf("\nDIGITE 1 PARA SIM: ");
                printf("\nDIGITE 2 PARA NAO: ");

                int change = 0;
                scanf("%d", &change);

                change == 1 ? (choice = 2) : printf("\nENTENDIDO, ESPERO PODER TE AJUDAR NA PROXIMA, ATÉ!");
            }else{
                smokersLeft--;
                printf("MESA RESERVADA COM SUCESSO!\n");
            }
        }

        //RESERVA PARA AREA COMUM
        if(choice == 2){
            if(normalLeft == 0) printf("INFELIZMENTE PARA A AREA COMUM ESTAMOS COM TODAS AS MESAS RESERVADAS!");
            else{
                normalLeft--;
                printf("MESA RESERVADA COM SUCESSO!\n");
            }
        }

        system("pause");
        system("cls");

    }while(smokersLeft != 0 || normalLeft != 0);

    return 0;
}
