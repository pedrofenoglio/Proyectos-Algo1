#include <stdio.h>        /* inclusiÃ³n biblioteca estandar */
#include <stdbool.h>

int main (void)
	{
		int x, y, z;
		int e1, e2, e3, e4;
		bool e5;
		

		printf("Ingrese un valor para x\n");
		scanf("%d", &x);
		printf("Ingrese un valor para y \n");
		scanf("%d", &y);
		printf("Ingrese un valor para z \n");
		scanf("%d", &z);

		e1 = (x + y + 1);
		printf("el resultado de la primer operacion es %d\n", e1);
		
		e2 = (z * z + y * 45 - 15 * x);
		printf("el resultado de la segunda operacion es %d\n", e2);
		
		e3 = (y - 2 == (x * 3 + 1) % 5);
		printf("el resultado de la tercera operacion es %d\n", e3);
		
		e4 = (y / 2 * x);
		printf("el resultado de la cuarta operacion es %d\n", e4);
		
		e5 = (y < x * z);
		printf("el resultado de la quinta operacion es %d\n", e5);


		printf("\n");
		printf("EJERCICIO 2\n");


		int b, w;
		bool e6, e7, e8;

		printf("Ingrese un valor para b\n");
		scanf("%d", &b);

		printf("Ingrese un valor para w\n");
		scanf("%d", &w);


		e6 = (x % 4 == 0);
		printf("el resultado de la sexta operacion es %d\n", e6);

		e7 = (x + y == 0 && y - x == (-1) * z);
		printf("el resultado de la septima operacion es %d\n", e7);

		e8 = (!b && w);
		printf("el resultado de la octava operacion es %d\n", e8);


		return 0;

		
	}