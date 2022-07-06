#include <stdio.h>
#include <stdlib.h>

#define PRECO_CACHORRO_QUENTE 11.0
#define PRECO_BAURU 8.5
#define PRECO_MISTO_QUENTE 8.5
#define PRECO_HAMBURGUER 9.0
#define PRECO_CHEESEBURGER 10.0
#define PRECO_REFRIGERANTE 4.5

int main(){

    printf("_ID_|____PRODUTO______|__PRECO__\n");
    printf(" 1  | CACHORRO QUENTE | R$11.00\n");
    printf(" 2  | BAURU           | R$8.50\n");
    printf(" 3  | MISTO QUENTE    | R$8.00\n");
    printf(" 4  | HAMBURGUER      | R$9.00\n");
    printf(" 5  | CHEESEBURGER    | R$10.00\n");
    printf(" 6  | REFRIGERANTE    | R$4.50\n");

    int choice = 0;
    printf("\nDIGITE O ID DO PRODUTO QUE DESEJA COMPRAR: ");
    scanf("%d", &choice);

    if(choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5 && choice != 6){
        printf("\nPRODUTO NAO ENCONTRADO\n");
        return 0;
    }

    int amountProd = 0;
    printf("DIGITE A QUANTIDADE QUE DESEJA COMPRAR: ");
    scanf("%d", &amountProd);

    float finalValue = 0;

    switch(choice){
        case 1:
            finalValue = amountProd * PRECO_CACHORRO_QUENTE;
            break;
        case 2:
            finalValue = amountProd * PRECO_BAURU;
            break;
        case 3:
            finalValue = amountProd * PRECO_MISTO_QUENTE;
            break;
        case 4:
            finalValue = amountProd * PRECO_HAMBURGUER;
            break;
        case 5:
            finalValue = amountProd * PRECO_CHEESEBURGER;
            break;
        default:
            finalValue = amountProd * PRECO_REFRIGERANTE;
            break;
    }

    printf("\nO VALOR A SER PAGO SERA DE R$%.2f\n", finalValue);

    return 0;
}
