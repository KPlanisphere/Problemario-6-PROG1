/*2.programa que lee un arreglo de n�meros enteros y un n�mero x y escriba
por pantalla todos los �ndices donde se encuentra x.*/

//cargar librer�a/s
#include<stdio.h>
#include <stdlib.h>
//Prototipos
void llenado (int [],int );
void escritura (int [],int);
void busqueda (int [],int, int);

//Principal
int main (){
	
	//Declarar variables
	int enteros,x;
	
	//Ingreso de datos por teclado para definir dimensi�n del arreglo
	printf ("\n-------->Ingrese el tama%co del arreglo unidimensional:",164);
	scanf ("%d",&enteros);
	//Declarar arreglo
	int numeros[enteros];
	system ("cls");
	//Llamada de primera funci�n void
	llenado (numeros,enteros);
	system ("cls");
	//Llamada de segundo funci�n void
	escritura (numeros,enteros);
	//Llamada de tercera funci�n void
	busqueda (numeros,x,enteros);
	
	//Cierre del programa
	printf ("\n\n");
	system ("pause");
	return 0;
}

//Funci�n de tipo void para dimensionar el arreglo
void llenado (int numeros[],int enteros){
	//Ingreso de datos por teclado para asignar valores al arreglo
	int i;
	for (i = 0;i < 5;i++){
		printf ("\nIngrese el numero %d que se registrara en el arreglo:",i+1);
		scanf ("%d",numeros[i]);
	}	
}

//Funci�n de tipo void para imprimir los valores en el arreglo
void escritura (int numeros[],int enteros){
	//Escritura de todos los valores en el arreglo
	int i;
	printf ("\n\tValores agregados al arreglo:");
	for (i = 0;i < enteros;i++){
		printf("[%d]",numeros[i]);
	}
	printf ("\n\t-----------------------------");		
}

//Funci�n de tipo void para buscar e imprimir �ndice solicitado por el usuario
void busqueda (int numeros[],int x,int enteros){
	
	//Variables utilizadas en la funci�n
	int i,error;
	int mayor=numeros[0];
	int menor=mayor;
	
	//Par�metros mayor menor para lanzar mensajes de error
	for (i=0;i < enteros;i++){
		if (numeros[i] > mayor){
			mayor=numeros[i];
		}
		if (numeros[i] < menor){
			menor=numeros[i];
		}
	}
	
	//Bucle do while para poder ingresar un valor x v�lido
	do{
		error=0;
		printf ("\n\nIngrese el valor x a buscar en los %cndices:",161);
		scanf ("%d",x);
		if (x < menor){
			printf ("\n\t[!] ERROR: El valor %d se encuentra por debajo de los valores en el arreglo [!]\n",x);
			error=1;			
		}
		if (x > mayor){
			printf ("\n\t[!] ERROR: El valor %d se encuentra por encima de los valores en el arreglo [!]\n",x);
			error=1;
		}
	}while (error != 0);

	//Impresi�n en pantalla de los �ndices
	printf ("\n\tEl valor %d se encuentra en el %cndice/los %cndices:",x,161,161);	
	for(i=0;i < enteros;i++){
		if (numeros[i] == x){
			printf ("{%d}",i);
		}
	}
}