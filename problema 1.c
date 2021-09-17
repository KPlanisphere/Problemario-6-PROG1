//Jesús Huerta Aguilar, Javier de La Luz Ruiz, Ernesto Flores Cesareo
//Programación I - "Programa: Concatenacion de arreglos y ordenamiento ascendente"
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
//PROTOTIPOS
void lectura(int [],int);
void ord(int [],int);
void imp(int [],int);
void conc(int [],int [],int [],int,int,int);
void conor(int [],int [],int [],int);
//PRINCIPAL
int main(){
    //TAMAÑO PRINCIPAL DE LOS ARREGLOS
    int tamc,tama,tamb,k=0;
    do{
        printf("Ingrese el tama%co del arreglo A: ",164);
        scanf("%d",&tama);
        printf("Ingrese el tama%co del arreglo B: ",164);
        scanf("%d",&tamb);
        if (tama <= 0 || tamb <= 0){
            printf("\n[!] ERROR: Dimenciones no valdias [!]");
            getch();
            system("cls");
        } 
    } while (tama <= 0 || tamb <= 0);
    tamc = tama + tamb;
    int a[tama],b[tamb],c[tamc];
    printf("\nNOTA: Ingresa los valores ascendentemente.\n");
    //LECTURA DE A Y B
    printf("\n///// ARREGLO A\n\n");
    lectura(a,tama);
    printf("\n///// ARREGLO B\n\n");
    lectura(b,tamb);
    //CONCATENAR ARREGLOS A Y B Y ORDENAR
    printf("\n///// ARREGLO C\n\n");
    conor(c,a,b,tamc);
    imp(c,tamc);
    getch();
    return 0;
}
//LECTURA
void lectura(int arreg[],int tam){
    int i;
    for (i = 0; i < tam; i++){
        do{
            printf("\t[%02d] %c ",i+1,26);
            scanf("%d",&arreg[i]);
            if (i > 0 && arreg[i] < arreg[i-1]){
                printf("\tERROR  %c\n",30);
            }
        } while (i > 0 && arreg[i] < arreg[i-1]);
    }
}
//IMPRECION
void imp(int arreg[],int tam){
    int i;
    for (i = 0; i < tam; i++){
            printf("\t[%02d] %c %d\n",i+1,26,arreg[i]);
        }
}
//CONCATENACIÓN A B
void conor(int arreg[],int arone[],int artwo[],int tamc){
    int i=0,j=0,act=0;
    do{
        if(arone[i] > artwo[j]){
            arreg[act] = artwo[j];
            j++;
        }
        else{
            if(arone[i] < artwo[j]){
                arreg[act] = arone[i];
                i++;
            }
            else{
                arreg[act] = arone[i];
                act++;
                arreg[act] = artwo[j];
                i++;
                j++;
            }
        }
        act++;
    } while(act < tamc);
}