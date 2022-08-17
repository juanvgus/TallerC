/*************************************
*Fecha: 11 agosto 2022
*Autor: Juan Diego Varon
*Materia: Parallel and Dsitributed computing
*Tema: Producto de dos numeros
**************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int num1, num2, resultado;

    printf("**********Producto de dos Numero**********");
    printf("\n Ingrese el primer numero: ");
    scanf("%d",&num1);
    printf("\n Ingrese el segundo numero: ");
    scanf("%d",&num2);
    printf("\n El producto de los dos numeros es: %d \n",resultado = num1*num2);
}