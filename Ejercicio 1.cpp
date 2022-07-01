/* 
	EJERCICIO 1.)
. Escribir una función que sume dos números. Implemente un programa que la utilice. 
*/

#include"stdio.h"

int suma(int a, int b);

int main (){
	int a;
	printf("Ingrese un primer valor:");
	scanf("%d",&a);
	int b;
	printf("Ingrese un segundo valor:");
	scanf("%d",&b);
	int resultado;
	
	resultado= a+b;
	
	printf("\nEl valor del primero numero es:%d\n",a);
	printf("El valor del segundo numero es:%d \n",b);
	printf("\nsabiendo los valores, el resultado de la suma seria: %d", resultado);
}
