/*************************************
*Fecha: 11 agosto 2022
*Autor: Juan Diego Varon
*Materia: Parallel and Dsitributed computing
*Tema: Calculadora de dias en años, semanas y días
**************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int dias, dia, semanas,anos;

    printf("**********Calculadora de dias a anos, semansa, dias**********");
    printf("\n Ingrese el numero de dias: ");
    scanf("%d",&dia);
    printf("\n Anos: %d \n", anos = dia/365);
    printf("\n Semanas: %d \n", semanas = (dia%365)/7);
    printf("\n Dias: %d \n", dias = (dia%365)%7);
}