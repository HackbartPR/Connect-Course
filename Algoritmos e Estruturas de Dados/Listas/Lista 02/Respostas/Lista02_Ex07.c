#include <stdio.h>

int main()
{
    char sex;
    printf("DIGITE O SEXO DA PESSOA: [M] HOMEM [F] MULHER: ");
    scanf("%c", &sex);

    if(sex != 'M' && sex != 'F' && sex != 'm' && sex != 'f'){
        printf("DIGITE UM VALOR VALIDO\n");
        return 0;
    }

    float height = 0;
    printf("DIGITE SUA ALTURA EM METROS: ");
    scanf("%f", &height);

    float bestWeight = 0;
    (sex == 'M' || sex == 'm') ? (bestWeight = 72.7 * height - 58) : (bestWeight = 62.1 * height - 44.7);

    printf("NESTE CASO O PESO IDEAL E %.2f Kg\n", bestWeight);

    return 0;
}
