#include <stdio.h>
#include <stdlib.h>

void bubleSort(int array[], int lenght);
void selectionSort(int array[], int lenght);

int main()
{
    int array[] = {46, 55, 59, 14, 38, 27};
    int lenght = sizeof(array) / sizeof(array[0]);

    //bubleSort(array, lenght);
    selectionSort(array,lenght);

    return 0;
}

void bubleSort(int array[], int lenght){
    int i = 0;
    while(i<lenght-1){
        for(int j=i+1; j<lenght; j++){
            if(array[i] > array[j]){
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
        i++;
        printf("%d %d %d %d %d %d\n",array[0],array[1],array[2],array[3],array[4], array[5]);
    }
}

void selectionSort(int array[], int lenght){
    int count = 1;

    while(count < lenght){
        int smaller = array[count-1];
        int position = count-1;

        for(int i = count; i<lenght; i++){
            if(array[i] < smaller){
                smaller = array[i];
                position = i;
            }
        }

        int temp = array[count-1];
        array[count-1] = smaller;
        array[position] = temp;

        count++;
    }
    printf("%d %d %d %d %d %d\n",array[0],array[1],array[2],array[3],array[4], array[5]);
}
