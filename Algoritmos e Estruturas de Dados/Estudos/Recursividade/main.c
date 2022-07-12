#include <stdio.h>
#include <stdlib.h>

/*
        p = pot(2,3)
          = 2 * pot(2,2)
          = 2 *2 *pot(2,1)
          = 2 *2 *2 *pot(2,0)
          = 2 *2 *2 *1
          = 8
*/

double potencia(int base, int expoente);
double fatorial(int num);
int restoDivisao (int dividendo, int divisor);
int quocienteDivisao (int dividendo, int divisor);
void imprimirContagem(int numMax);
void contagemRegressiva(int numMax);
void imprimirBinario(int decimal);

int main()
{
    printf("Potencia 2^4: %.1lf\n", potencia(2,4));
    printf("Fatorial 5!: %.1lf\n", fatorial(5));
    printf("Resto Divisao 11/4: %d\n", restoDivisao(11,4));
    printf("Quociente da Divisao 10/3: %d\n", quocienteDivisao(10,3));
    imprimirContagem(5);
    contagemRegressiva(5);
    imprimirBinario(10);
    return 0;
}
double potencia(int base, int expoente){
    if(expoente == 0) return 1;

    return base * potencia(base, expoente - 1);
}

double fatorial(int num){
    if(num == 1)return 1;

    return num * fatorial(num-1);
}

int restoDivisao (int dividendo, int divisor){
    if(dividendo < divisor) return dividendo;

    return restoDivisao(dividendo - divisor, divisor);
}

int quocienteDivisao (int dividendo, int divisor){
    static int quociente = 0;

    if(dividendo < divisor) return quociente;

    quociente++;

    return quocienteDivisao(dividendo - divisor, divisor);
}

void imprimirContagem(int numMax){
    if(numMax == 0) return;

    imprimirContagem(numMax - 1);

    printf("Contagem: %d\n", numMax);
}

void contagemRegressiva(int numMax){
    if(numMax == 0) return;

    printf("Contagem Regressiva: %d\n", numMax);

    contagemRegressiva(numMax - 1);
}

void imprimirBinario(int decimal){
    if(decimal < 2) return

    printf("%d", decimal);

    imprimirBinario(decimal/2);

    printf("%d", restoDivisao(decimal,2));
}
