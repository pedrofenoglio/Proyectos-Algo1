#include <stdio.h>

int pedirEntero(void){
    int x;
    printf("Selecciona un numero:\n");
    scanf("%d", &x);
    return x;
}

void imprimirEntero(int x){
    printf("El numero que elegiste es %d", x);
}

int main(void){
    imprimirEntero(pedirEntero());
    return 0;
}

