#include <stdio.h>
#include <stdlib.h>
#include <time.h>

static int random(void);
static int fullRandom(void);

int main()
{
    printf("%d\n", fullRandom());
    printf("%d\n", fullRandom());
    printf("%d\n", fullRandom());


    return 0;
}

static int random(void){
    static unsigned int seed = 1234;

    unsigned int randomNumber = seed % 100;
    unsigned int adderNumbers = seed / 10;

    seed += adderNumbers;

    return randomNumber;
}

static int fullRandom(void){
    for(int i=0; i<30000; i++)
        for(int j=0; j < 15000; j++){}

    unsigned long seconds = time(NULL);
    unsigned int seed = seconds % 10000;

    unsigned int randomNumber = seed % 100;

    return randomNumber;
}
