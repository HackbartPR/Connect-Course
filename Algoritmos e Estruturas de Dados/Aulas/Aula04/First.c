#include <stdio.h>

int main(){

    //firstExercise();
    //secondExercise();
    thirdExercise();

    return 0;
}

void firstExercise(){

    int num = 0;
    printf("DIGITE UM NUMERO: ");
    scanf("%d", &num);

    if(((num  % 2 == 0) && (num > 10)) || ((num % 2 != 0) && (num < 50)))
        printf("SIM\n");
    else
        printf("NAO\n");
}

void secondExercise(){
    float first = 0;
    printf("DIGITE O PRIMEIRO NUMERO: ");
    scanf("%f", &first);

    float second = 0;
    printf("DIGITE O SEGUNDO NUMERO: ");
    scanf("%f", &second);

    float third = 0;
    printf("DIGITE O SEGUNDO NUMERO: ");
    scanf("%f", &third);

    float bigger = first;

    if(bigger < second)
        bigger = second;

    if(bigger < third)
        bigger = third;

    printf("\nO MAIOR NUMERO E: %.1f\n", bigger);
}

void thirdExercise(){

    float num1 = 0, num2 = 0, num3 = 0;
    printf("DIGITE TRES NUMERO EM ORDEM ALEATORIA, SEPARE-OS POR UM ESPACO:");
    scanf("%f %f %f", &num1, &num2, &num3);

    float first = 0,second = 0, third = 0;

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

    //VERIFICA SE TODOS OS NUMEROS SAO IGUAIS
    if(num1 == num2 || num1 == num3){
        first = num1;
        second = num2;
        third = num3;
    }

    //VERIFICA SE O PRIMEIRO NUMERO E IGUAL AO SEGUNDO
    if(num1 == num2){
        if(num1 < num3){
            first = num1;
            second = num2;
            third = num3;
        }else{
            first = num3;
            second = num1;
            third = num2;
        }
    }

    //VERIFICA SE O PRIMEIRO NUMERO E IGUAL AO TERCEIRO
    if(num1 == num3){
        if(num1 < num2){
            first = num1;
            second = num2;
            third = num3;
        }else{
            first = num2;
            second = num1;
            third = num3;
        }
    }

    //VERIFICA SE O SEGUNDO NUMERO E IGUAL AO TERCEIRO
    if(num2 == num3){
        if(num2 < num1){
            first = num2;
            second = num3;
            third = num1;
        }else{
            first = num1;
            second = num2;
            third = num3;
        }
    }

    printf("\nPRIMEIRO: %.1f\n", first);
    printf("SEGUNDO: %.1f\n", second);
    printf("TERCEIRO: %.1f\n", third);
}
