#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    /*Ejercicio 5*/
    /*Ejercicio 1.h*/
    int i, a;
    a = 0;
    printf("Selecciona un valor para i (El estado inicial de la guia es 4)\n");
    scanf("%d", &i);
     while (i != 0 ){
        i = i -1 ;
        a = a + 1;
     }
   /* A este le puse una variable extra para poder ver lo que el programa devuelve mas facil*/
    printf("i es igual a %d\n", a);



    /*Ejercicio 1.i*/

    printf("Selecciona un valor para i (El estado inicial de la guia es 400)\n");
    scanf("%d", &i);
     while (i != 0 ){
        i = 0;
     }
    printf("i es igual a %d", i);




    /*Ejercicio 5.b*/
    /*Parte 1*/

    int x, y;

   printf("Ingrese un valor para x\n");
	scanf("%d", &x);
   printf("Ingrese un valor para y\n");
	scanf("%d", &y);
   i = 0;

    while (x >= y){
        x = x - y;
        i = i + 1;
        printf("El valor de x = %d , y = %d en la iteracion : %d \n", x , y , i);
    } 



   /*--------------------------------------------------------------------------------------------------*/


  int x, i;
  int res;


  printf("Ingrese un valor para x\n");
	scanf("%d", &x);
  printf("Ingrese un valor booleano para res\n");
	scanf("%d", &res);


 i = 0;
 res = true;

	while ( (i < x) && res) {
  	res = res && ((x % i) != 0 );
  	i = i+1;
  	printf("El valor de x = %d , res = %d en la interacion : %d \n", x , res , i);





    return 0;
    }


