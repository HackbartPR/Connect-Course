#include <stdio.h>

int main(){
    //printTeste();

    primeiro();
    segundo();
    terceiro();
    quarto();
    quinto();
    sexto();
    setimo();
    oitavo();
    nono();

    return 0;
}

void printTeste(){

    for(int i=0; i<=7; i++){
        for(int j=0; j<=7; j++)
            printf("%d:%d ", i,j);

        printf("\n");
    }


}

void primeiro(){
    for(int lin=0; lin<=7; lin++){
        for(int col=0; col<=7; col++){
            if(lin >= col)
                printf("# ");
        }
        printf("\n");
    }

    printf("\n\n");
}

void segundo(){
    for(int lin=0; lin<=7; lin++){
        for(int col=0; col<=7; col++){
            if(lin <= col)
                printf("# ");
        }
        printf("\n");
    }

    printf("\n\n");
}

void terceiro(){
    for(int lin=0; lin<=7; lin++){
        for(int col=0; col<=7; col++){
            if(col >= lin)
                printf("# ");
            else
                printf("  ");
        }
        printf("\n");
    }

    printf("\n\n");
}

void quarto(){
    for(int lin=0; lin<=7; lin++){
        for(int col=0; col<=7; col++){

            if((lin + col) >= 7)
                printf("# ");
            else
                printf("  ");

        }
        printf("\n");
    }

    printf("\n\n");
}

void quinto(){
    for(int lin=0; lin<=7; lin++){
        for(int col=0; col<=7; col++){

            if(lin == 0 || lin == 7 || col == 0 || col == 7)
                printf("# ");
            else
                printf("  ");

        }
        printf("\n");
    }

    printf("\n\n");
}

void sexto(){
    for(int lin=0; lin<=7; lin++){
        for(int col=0; col<=7; col++){

            if(lin == 0 || lin == 7 || lin == col)
                printf("# ");
            else
                printf("  ");

        }
        printf("\n");
    }

    printf("\n\n");
}

void setimo(){
    for(int lin=0; lin<=7; lin++){
        for(int col=0; col<=7; col++){

            if(lin == 0 || lin == 7 || lin+col == 7)
                printf("# ");
            else
                printf("  ");

        }
        printf("\n");
    }

    printf("\n\n");
}

void oitavo(){
    for(int lin=0; lin<=7; lin++){
        for(int col=0; col<=7; col++){

            if(lin == 0 || lin == 7 || lin+col == 7 || lin == col)
                printf("# ");
            else
                printf("  ");

        }
        printf("\n");
    }

    printf("\n\n");
}

void nono(){
    for(int lin=0; lin<=7; lin++){
        for(int col=0; col<=7; col++){

            if(lin == 0 || lin == 7 || lin+col == 7 || lin == col || col == 0 || col == 7)
                printf("# ");
            else
                printf("  ");

        }
        printf("\n");
    }

    printf("\n\n");
}
