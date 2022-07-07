#include <stdio.h>
#include <stdlib.h>

int main(){
    //firstExercicios();
    //secondExercise();
    //thirdExercise();
    fourExercise();
    return 0;
}

void firstExercicios(){

    int choice = 0;

    do{
        printf("_ID_|____PRODUTO______|__PRECO__\n");
        printf(" 1  | CACHORRO QUENTE | R$11.00\n");
        printf(" 2  | BAURU           | R$8.50\n");
        printf(" 3  | MISTO QUENTE    | R$8.00\n");
        printf(" 4  | HAMBURGUER      | R$9.00\n");
        printf(" 5  | CHEESEBURGER    | R$10.00\n");
        printf(" 6  | SAIR            |  \n");


        printf("\nDIGITE O ID DO PRODUTO QUE DESEJA COMPRAR: ");
        scanf("%d", &choice);

        switch(choice){
        case 1:
            printf("\nVOCE COMPROU UM HOTDOG");
            break;
        case 2:
            printf("\nVOCE COMPROU UM BAURU");
            break;
        case 3:
            printf("\nVOCE COMPROU UM MISTO QUENTE");
            break;
        case 4:
            printf("\nVOCE COMPROU UM HAMBURGUER");
            break;
        case 5:
            printf("\nVOCE COMPROU UM CHEESEBURGER");
            break;
        }

        system("pause");
        system("clear || cls");

    }while(choice != 6);

    printf("\nVOLTE SEMPRE\n");
}

void secondExercise(){

    int num1 = 0;
    printf("DIGITE UM NUMERO INTEIRO BASE: ");
    scanf("%d", &num1);

    int num2 = 0;
    printf("DIGITE UM NUMERO INTEIRO O EXPOENTE: ");
    scanf("%d", &num2);

    int result = 1;
    for(int i=1; i <= num2; i++){
        result *= num1;
    }


    printf("%d ^ %d = %d", num1, num2, result);
}

void thirdExercise(){

    int num1 = 0;
    printf("DIGITE A QUANTIDADE DE VEZES QUE DESEJA SOMAR: ");
    scanf("%d", &num1);

    int result = 0;
    for(int i = 1; i <= num1; i++)
        result += i;

    printf("\nA SOMA E %d\n", result);
}

void fourthExercise(){

    int num1 = 0;
    printf("DIGITE UM NUMERO: ");
    scanf("%d", &num1);

    for(int i = 2; i <= num1; i++){
        if(num1 % i == 0)
            printf("%d ", i);
    }
}

