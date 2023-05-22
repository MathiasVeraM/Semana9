//Generar un programa que defina una matriz con dimensiones ingresadas por el usuario, y la llene de numeros random de 0 a 100
//Luego de generar esa matriz, calcula su transpuesta
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(NULL));
    int x, y, i, j, filas=0, columnas=0;
    printf("Por favor ingrese las filas: ");
    scanf("%d",&filas);
    printf("Por favor ingrese las columnas: ");
    scanf("%d",&columnas);
    x=filas;
    y=columnas;
    int Matriz[x][y];
    
    
    return 0;
}