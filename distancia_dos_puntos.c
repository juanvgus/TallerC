/*************************************
*Fecha: 11 agosto 2022
*Autor: Juan Diego Varon
*Materia: Parallel and Dsitributed computing
*Tema: Distancia Entre Dos Puntos
**************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    double x1, x2, y1, y2, resultado;

    printf("**********Distancia Entre Dos Puntos**********");
    printf("\n Ingrese el valor de x1: ");
    scanf("%lf",&x1);
    printf("\n Ingrese el valor de y1: ");
    scanf("%lf",&y1);
    printf("\n Ingrese el valor de x2: ");
    scanf("%lf",&x2);
    printf("\n Ingrese el valor de y2: ");
    scanf("%lf",&y2);
    printf("\n La distancia entres los dos puntos es:  %lf \n", resultado = sqrt(pow(x2-x1,2)+pow(y2-y1,2)));
}