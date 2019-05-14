#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ELE "-l"
#define CIRCUITO "circuito"
#define PARTIDO "partido"
#define LOCALIDAD "localidad"
#define ESCUELA "escuela"


int main(int argc, char *argv[]){
    
    if (argc >= 2 && argc <= 4) {
        //printf("Ingresaste %s\n",argv[1]);
        if (strcmp(argv[1],ELE)==0){
            printf("es menos ele xd\n");
        }else
        {   
            printf ("primer parametro incorrecto\n");
            return 0;
        }
        /*Decision sobre que tipo de lista hacer*/
        if (strcmp(argv[2],CIRCUITO)==0) {
            printf ("entre a circuito\n");
        }
        if (strcmp(argv[2],PARTIDO)==0) {
            printf ("entre a partido\n");
        }
        
    }else
    {
        printf("Cantidad de parametros invalido\n");
    }
    
    
}	