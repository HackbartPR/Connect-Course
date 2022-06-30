#include <stdio.h>
#include <stdlib.h>

void main() {
    //imprimirNome();
    //imprimirNumeros();
    imprimirOperacoes();
}

void imprimirNome () {
    printf("Digite seu nome: ");

    char name[] = "";
    scanf("%s", &name);

    printf("Seu nome: %s\n", name);
}

void imprimirNumeros () {
    float a = 12.3;
    float b = 5.674;
    float c = 1.23;

    printf("%03.2f\n %04.3f\n %03.2f\n",a,b,c);
}

void imprimirOperacoes () {

    printf("Digite o primeiro numero: ");
    double num1 = 0;
    scanf("%lf", &num1);

    printf("Digite o segundo numero: ");
    double num2 = 0;
    scanf("%lf", &num2);

    double sum = num1 + num2;
    printf("\nSoma: %.2lf", sum);

    double sub = num1 - num2;
    printf("\nSubtracao: %.2lf", sub);

    double mult = num1 * num2;
    printf("\nMultiplicacao: %.2lf", mult);

    double div = num1 / num2;
    printf("\nDivisao: %.2lf\n", div);
}




