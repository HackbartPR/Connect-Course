#include <stdio.h>

int main(){

    int amountHouses = 0;
    printf("DIGITE A QUANTIDADE DE CASAS VISITADAS: ");
    scanf("%d", &amountHouses);

    int chanel_3 = 0;
    int chanel_5 = 0;
    int chanel_11 = 0;
    int chanel_13 = 0;

    int audience_3 = 0;
    int audience_5 = 0;
    int audience_11 = 0;
    int audience_13 = 0;

    for(int i = 1; i <= amountHouses; i++){
        printf("PARA A %d%c CASA, QUAL O CANAL MAIS ASSISTIDO?\n", i,166);
        printf("DIGITE 3 PARA O CANAL 3\n");
        printf("DIGITE 5 PARA O CANAL 5\n");
        printf("DIGITE 11 PARA O CANAL 11\n");
        printf("DIGITE 13 PARA O CANAL 13\n");
        int choice = 0;
        scanf("%d", &choice);

        printf("QUANTAS PESSOAS NA %d%c RESIDENCIA ASSISTEM AO CANAL %d?",i,166,choice);
        int audience = 0;
        scanf("%d", &audience);

        switch(choice){
        case 3:
            chanel_3++;
            audience_3 += audience;
            break;
        case 5:
            chanel_5++;
            audience_5 += audience;
            break;
        case 11:
            chanel_11++;
            audience_11 += audience;
            break;
        case 13:
            chanel_13++;
            audience_13 += audience;
            break;
        default:
            printf("CANAL INVALIDO");
            return 0;
        }
    }

    //VERIFICAR QUAL CANAL POSSUI O MAIOR QUANTIDADE DE RESIDENCIAS ASSISTINDO-O


    return 0;
}
