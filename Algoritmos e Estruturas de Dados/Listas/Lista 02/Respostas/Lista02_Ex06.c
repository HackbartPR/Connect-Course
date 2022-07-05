#include <stdio.h>

int main(){

    printf("DIGITE TODOS OS VALORES COMO INTEIROS E DEFERENTES ENTRE SI\n: ");

    int num1 = 0;
    printf("DIGITE O PRIMEIRO NUMERO: ");
    scanf("%d", &num1);

    int num2 = 0;
    printf("DIGITE O SEGUNDO NUMERO: ");
    scanf("%d", &num2);

    int num3 = 0;
    printf("DIGITE O TERCEIRO NUMERO: ");
    scanf("%d", &num3);

    int first = 0,second = 0, third = 0;

    //VERIFICA SE O NUM1 É O MENOR
    if(num1 < num2 && num1 < num3){
        first = num1;
        //VERIFICA O RESTANTE
        if(num2 < num3){
            second = num2;
            third = num3;
        }else{
            second = num3;
            third = num2;
        }
    }

    //VERIFICA SE O NUM2 É O MENOR
    if(num2 < num1 && num2 < num3){
        first = num2;
        //VERIFICA O RESTANTE
        if(num1 < num3){
            second = num1;
            third = num3;
        }else{
            second = num3;
            third = num1;
        }
    }

    //VERIFICA SE O NUM3 É O MENOR
    if(num3 < num1 && num3 < num2){
        first = num3;
        //VERIFICA O RESTANTE
        if(num1 < num2){
            second = num1;
            third = num2;
        }else{
            second = num2;
            third = num1;
        }
    }

    printf("\nORDEM DECRESCENTE: %d %d %d\n", third, second, first);

    return 0;
}
