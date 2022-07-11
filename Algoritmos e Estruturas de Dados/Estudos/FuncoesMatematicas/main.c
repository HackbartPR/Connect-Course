#include <stdio.h>
#include <stdlib.h>

double fatorial (int numero);
double potencia (int base, int potencia);
double quadrado (int num);
float raizQuadrada(float num);

int main()
{

    //printf("O fatorial de %d e: %.1lf\n", 5, fatorial(5));

    //printf("O resultado de %d^%d: %.1lf\n", 2, 3, potencia(2,3));

    //printf("O quadrado do numero %d: %1.lf",3, quadrado(3));

    printf("a raiz quadrada do numero %.1f: %.3f",4.0, raizQuadrada(4));

    return 0;
}

double fatorial (int numero){
    double resultado = 1;

    for(int i = numero; i > 0; i--)
        resultado *= i;

    return resultado;
}

double potencia (int base, int potencia) {
    double resultado = 1;

    for(int i=1; i <= potencia; i++)
        resultado *= base;

    return resultado;
}

double quadrado (int num){
    //O quadrado de um numero n natural é dado pela somas do numeros n impares
    double result = 0;
    int count = 0;
    int quantImpar = num;

    do{
        if(count % 2 != 0){
            result += count;
            printf("%d", count);
            quantImpar--;
        }
        count++;
    }while(quantImpar >= 1);

    return result;
}

float raizQuadrada(float num){

    float result = 1;
    float precisao = 0;

    do{
        float raiz = result * result;
        precisao = raiz - num;

        if(precisao < 0)
            precisao *= -1;

        if(precisao > 0.001)
            result = (raiz + num) / (2 * result);

    }while(precisao > 0.001);

    return result;
}
