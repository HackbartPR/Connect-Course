#include <stdio.h>

#define _PRICE_KG 23.59

int main(){
    float foodWeight = 0;
    float drinkSpent = 0;

    do{
        printf("DIGITE O PESO DA ALIMENTACAO EM KG: ");
        scanf("%f", &foodWeight);

        printf("DIGITE O VALOR GASTO COM BEBIDAS: ");
        scanf("%f", &drinkSpent);

        float bill = drinkSpent + (foodWeight * _PRICE_KG);
        printf("\nO VALOR GASTO FOI DE R$%.2f: \n", bill);

        printf("OBRIGADO PELA PREFERENCIA!\n");
        system("pause");
        system("cls");
    }while(foodWeight != 0 && drinkSpent != 0);

    return 0;
}
