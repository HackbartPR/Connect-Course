#include <stdio.h>

#define _MAX_KM 4000

int main(){
    float kiloTraveled = 0;
    int count = 0;

    while( kiloTraveled < _MAX_KM){
        float traveled = 0;

        if(count == 0){
            printf("ESTA E SUA PRIMEIRA PARADA, QUANTOS QUILOMETROS FORAM PERCORRIDOS ATE AQUI? ");
            scanf("%f", &traveled);

            kiloTraveled += traveled;
            printf("FALTAM %.2f KM ATE O FINAL DA BR 101",_MAX_KM - kiloTraveled);
        }
        else{
            printf("\n\nCOM ESSA NOVA PARADA, QUANTOS QUILOMETROS FORAM PERCORRIDOS DESDE A ULTIMA? ");
            scanf("%f", &traveled);

            kiloTraveled += traveled;
            printf("ATE AQUI VOCE JA VIAJOU %.2f KM, FALTAM %.2f KM ATE O FINAL DA BR 101", kiloTraveled, _MAX_KM - kiloTraveled);
        }
        count++;
    }

    return 0;
}
