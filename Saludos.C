#include <stdio.h>

void imprimeHola(void){
    printf("Hola mundo\n");
}

void imprimeChau(void){
    printf("Chau mundo\n");
}


int main(void){

/*imprimir dos veces “Hola” seguido de dos veces “Chau”*/
    imprimeHola();
    imprimeHola();
    imprimeChau();
    imprimeChau();
    
    return 0;
}