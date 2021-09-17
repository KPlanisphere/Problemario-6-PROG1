//Jesús Huerta Aguilar, Javier de La Luz Ruiz, Ernesto Flores Cesareo
//Programación I - "Programa: Producto punto de dos vectores (arreglos)"
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
//PROTOTIPOS
void lectura(int [],int);
void punto(int [],int [],int);
//PRINCIPAL
int main(){
    //TAMAÑO PRINCIPAL DE LOS ARREGLOS
    int tam;
    do{
        printf("Ingrese el tama%co de los arreglos: ",164);
        scanf("%d",&tam);
        if (tam <= 0){
            printf("\n[!] ERROR: Dimenciones no valdias [!]");
            getch();
            system("cls");
        } 
    } while (tam <= 0);
    int a[tam],b[tam];
    //LECTURA DE A Y B
    printf("\n///// ARREGLO A\n\n");
    lectura(a,tam);
    printf("\n///// ARREGLO B\n\n");
    lectura(b,tam);
    //PRODUCTO PUNTO
    printf("\n///// PRODUCTO PUNTO A %c B\n\n",250);
    punto(a,b,tam);
    getch();
    return 0;
}
//LECTURA
void lectura(int arreg[],int tam){
    int i,res;
    for (i = 0; i < tam; i++){
            printf("\t[%02d] -> ",i+1);
            scanf("%d",&arreg[i]);
        }
}
//PRODUCTO PUNTO
void punto(int ara[],int arb[],int tam){
    int i,mult,res=0;
    printf("\t[A%cB] = ",250);
    for (i = 0; i < tam; i++){
        if (i < tam-1){
            printf("%d%c%d + ",ara[i],158,arb[i]);
        }
        else{
            printf("%d%c%d = ",ara[i],158,arb[i]);
        }
    }
    for (i = 0; i < tam; i++){
        mult = ara[i]*arb[i];
        if (i < tam-1){
            printf("%d + ",mult);
        }
        else{
            printf("%d = ",mult);
        }
        res += mult;
    }
    printf("%d\n",res);
}