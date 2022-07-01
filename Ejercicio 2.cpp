/*
	EJERCICIO 2.)
Escribir un programa que reciba como argumento un conjunto de números.
Calcular la media mediante una función.  
*/

#include"stdio.h"

int main(){
	
	printf("Con el grupo de numeros que usted va a ingresar, se va a calcular el promedio: \n");
	
	int x1, x2, x3, x4, x5;
	printf("Ingrese los valores: \n");
	scanf("%d""%d""%d""%d""%d",&x1,&x2,&x3,&x4,&x5);
	int promedio;
	
	promedio= (x1+x2+x3+x4+x5)/5;
	
	printf("Usted ingreso 5 numeros. El promedio de los mismos seria: %d",promedio);
	return 0;
}
