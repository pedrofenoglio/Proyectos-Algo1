#include <stdio.h>


/* defino funciones para el 4b*/
int pedirEntero(void){
    int x;
    printf("Selecciona un numero:\n");
    scanf("%d", &x);
    return x;
}

void imprimirEntero(int x){
    printf("%d\n", x);
}
/* --------------------------------------------------------------------------------------------------*/


/* Ejercicio 4b*/

int main (void) {

  int x, y, z, m;

  x = pedirEntero();
  y = pedirEntero();
  z = pedirEntero();
  m = pedirEntero();

if (x<y) {
  m = x;

 }
else if (x>=y) {
  m = y;

 }

else {

 }


 if (m<z) {

 }
else if (m>=z) {
  m = z;
  printf("El valor m es igual a %d \n ", (m=z));

 }
 printf("Los estados finales son:\n");
 imprimirEntero(x);
 imprimirEntero(y);
 imprimirEntero(z);
 imprimirEntero(m);


}
