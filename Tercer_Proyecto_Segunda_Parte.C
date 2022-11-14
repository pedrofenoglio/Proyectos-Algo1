#include <stdio.h> 

int main(void)
    {

    /* Ejercicio 1.a */


    /* 
    Var x : Int;
    x:=5
    */
    int x;

    printf("El estado inicial es 1 \n");
    scanf("%d", &x);

    x = 5;
    printf("X vale %d\n", x);
        
     
    /*  Ejercicio 1.b  */
        
    /*
    Var x,y : Int;
    x:= x+y;
    y:= y+y
    */

    printf("Ejercicio 1b\n");

    int x, y ;


    printf("El estado inicial debe ser  x->2 , y->5 \n");
    printf("Valor incial de x\n");
    scanf("%d", &x);
    printf("El valor inicial de y\n");
    scanf("%d", &y);

    x = x + y ;
    y = y + y ;

    printf("los estados finales son:\n");
    printf("x %d    ", x);
    printf("y %d\n", y);


    /* Ejercicio 1c*/

    /*
    Var x,y : Int;
    y:= y+y;
    x:= x+y;
    */
    printf("Ejercicio 1c\n");

    int x, y;

    printf("El estado inicial debe ser  x->2 , y->5 \n");
    printf("Valor incial de x\n");
    scanf("%d", &x);
    printf("El valor inicial de y\n");
    scanf("%d", &y);
    
    y = y + y ;
    x = x + y ;

    printf("los estados finales son:\n");
    printf("x %d", x);
    printf("y %d\n", y);



    /* EJERCICIO 4*/

    /*El estado σ0 debe solicitarse al usuario, agregando las instrucciones necesarias para que
    el usuario pueda ingresar los valores de las variables de entrada.*/



    /* Este es el 1e del práctico*/

    printf("Elegi un valor para x (El estado inicial es 2)\n");
    scanf("%d", &x);
    printf("Ahora un valor para y (El estado incial es 5) \n");
    scanf("%d", &y);

    if (x >= y) 
    {
        x = 0;
    }
    else {
        x = 2;
    }


    /*Este es el 1f del practico*/

    printf("Elegi un valor para x (El estado inicial es 100)\n");
    scanf("%d", &x);
    printf("Ahora un valor para y (El estado inicial es 1) \n");
    scanf("%d", &y);

    if (x >= y){
        x = 0;
    }
    else {
        x = 2;
    }

    /* Falta hacer el 4b pero me dio muchisima paja*/



    /* 4b */
    
  int x, y, z, m;

  printf("Ingrese un valor para x\n");
	scanf("%d", &x);
  printf("Ingrese un valor para y\n");
	scanf("%d", &y);
  printf("Ingrese un valor para z\n");
	scanf("%d", &z);
  printf("Ingrese un valor para m\n");
	scanf("%d", &m);

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

 printf("El estado de las variables quedan asi: x=%d ,y=%d ,z=%d ,m=%d \n ", x , y , z , m);

// Para los valores x=1 , y=2 , z=8 , m=44 el valor de m=1
//

    








        return 0;
    }