#include <stdio.h>

int main(){
    int amountCat = 0;
    int amountDog = 0;
    int isContinue = 0;
    int countAnimal = 1;

    do{
        printf("DIGITE A ESPECIE DO %d%c ANIMAL: ", countAnimal, 167);
        printf("\nDIGITE 1 PARA GATO: ");
        printf("\nDIGITE 2 PARA CACHORRO: \n");
        int especie = 0;
        scanf("%d", &especie);

        if(especie == 1){
            printf("\nDIGITE A QUANTIDADE DE GATOS NA LOJA: ");
            scanf("%d", &amountCat);
            countAnimal++;
        }else if(especie == 2){
            printf("\nDIGITE A QUANTIDADE DE CACHORROS NA LOJA: ");
            scanf("%d", &amountDog);
            countAnimal++;
        }
         else printf("\nOPCAO INVALIDA");

        printf("\nDESEJA CADASTRAR MAIS ALGUM ANIMAL? ");
        printf("DIGITE 1 PARA SIM: ");
        printf("DIGITE 2 PARA NAO: ");
        scanf("%d", &isContinue);


        system("cls");
    }while(isContinue == 1);

    printf("\nA LOJA POSSUI %d GATOS E %d CACHORROS", amountCat, amountDog);

    return 0;
}
