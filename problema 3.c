//Jesús Huerta Aguilar, Javier de La Luz Ruiz, Ernesto Flores Cesareo
//Programación I -  Arreglo numeros primos.
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
void arreglofinal(int *primo, int x);
int main(){
    int i, j, cont, x=0, primo[100];
    for ( i = 1; i <= 410; i++)
    {
        cont = 0;
        for ( j = 1; j < i; j++)
        {
            if (i%j == 0)
            {
                cont++;
            }
        }
        if (cont < 2)
        {
            primo[x] = i;
            x++;
        }
    }
    arreglofinal(primo, x);
    system("pause");
    return 0;
}
void arreglofinal(int *primo, int x){
    int i;
    printf("\n Estos son los numeros primos hasta 80: \n\n");
    for ( i = 0; i < x; i++)
    {
        printf(" %d -- [ %d ] \n", i, *(primo+i));
    }
}



/* //Jesús Huerta Aguilar, Javier de La Luz Ruiz, Ernesto Flores Cesareo

int main(){
    
    int x, cont, j, i, tabla[100];
    for ( i = 1; i <= 360; i++)
    {
        cont=0;
        for ( j = 1; j < i; j++)
        {
            if (i%j==0)
            {
                cont++;
            }
            
        }
        if (cont<=2)
        {
        tabla[x]=i;
        x++;
        }
    }

    for ( i = 0; i < x; i++)
    {
        printf("    %d    [ %d ]\n",x, tabla[i]);
    }

    system("pause");
    return 0;
} */