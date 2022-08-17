/*************************************
*Fecha: 11 agosto 2022
*Autor: Juan Diego Varon
*Materia: Parallel and Dsitributed computing
*Tema: Patron Triangulo
**************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int num;

    printf("Ingrese el numero de lineas (entre 0 y 14): ");
    scanf("%d", &num);
    if (0<num<=14)
    {
        for (int i = 1; i <= num; i++){
            for (int j = 0; j < i; j++)
            {
                printf("*");
            }        
            printf("\n");
        }
    }else{
        printf("Intentelo de nuevo, numero maximo de lineas 14.");
    }
}