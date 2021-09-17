//Jesús Huerta Aguilar, Javier de La Luz Ruiz, Ernesto Flores Cesareo
//Programación I - Leer numeros negativos y positivos
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
void arreglopositivo(int [], int x);
void arreglonegativo(int [], int z);
int main(){
    int x=0, z=0, num, positivo[100], negativo[100];	
	printf("\n Escriba '0' para dejar de meter datos. \n");
    do{
        printf("\n Ingrese un numero ");
        scanf("%d", &num);
        if (num > 0){
            positivo[x] = num;
            x++;
        }else{
            if (num < 0){
                negativo[z] = num;
                z++;
            }
        }
    } while (num != 0);  
    arreglopositivo(positivo,x);
    arreglopositivo(negativo,z);
    getch();
    return 0;
}
void arreglopositivo(int sech[], int x){
    int i;
    printf("\n Estos son los numeros positivos: \n");
    for ( i = 0; i < x; i++){   
        printf(" (%d) \n", sech[i]);
    }
}
void arreglonegativo(int pepe[], int z){
    int i;
	printf("\n Estos son los numeros negativos: \n");
    for ( i = 0; i < z; i++){   
        printf(" (%d) \n", pepe[i]);
    }
}



/* int main(){

    int x, i, z, num, positivo[100], negativo[100];

    do
    {
        printf("\n Ingrese un numero");
        scanf("%d", &num);
        if (num > 0)
        {
            positivo[x] = num;
            x++;
        }else
        {
            if (num < 0)
            {
                negativo[z] = num;
                z++;
            }
        }
    } while (num != 0);
    
    printf("\n Estos son los numeros positivos: \n");
    for ( i = 0; i < x; i++)
    {   
        printf(" (%d) \n", positivo[i]);
    }

    printf("\n Estos son los numeros negativos: \n");
    for ( i = 0; i < z; i++)
    {   
        printf(" (%d) \n", negativo[i]);
    }
    
    return 0;
} */