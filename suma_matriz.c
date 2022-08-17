/*************************************
*Fecha: 11 agosto 2022
*Autor: Juan Diego Varon
*Materia: Parallel and Dsitributed computing
*Tema: Suma Matriz
**************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void inicializar_matrices(int N, int matrizA[], int matrizB[], int matrizC[]){

    int i, j;

    for (i=0; i<N; i++){
	
		for (j=0; j<N;j++){
			matrizA[i+j*N]= rand() % (N+1);
            matrizB[i+j*N]= rand() % (N+1);
            matrizC[i+j*N]= 0;
		}
		
	
	}

}

void imprimir_matriz(int N, int matrizA[]){

    int i, j;

    for (i=0; i<N; i++){
		
	
		for (j=0; j<N;j++){

			printf(" %d ",matrizA[i+j*N]);
			
		}
		printf("\n");
	
	}

}

void sumar_matriz(int N, int matrizA[], int matrizB[], int matrizC[]){

    int i, j;

    for (i=0; i<N; i++){
		
	
		for (j=0; j<N;j++){

			matrizC[i+j*N] = matrizA[i+j*N] + matrizB[i+j*N];
			
		}
	
	}

}

int main(){

    int N, size;
    printf("\n Ingrese el numero de tamano de la matriz(1-7): ");
    scanf("%d",&N);
    
    int matrizA[N*N];
    int matrizB[N*N];
    int matrizC[N*N];

    if (0< N&& N<8)
    {
        inicializar_matrices(N,matrizA, matrizB, matrizC);
        printf("\n Matriz A \n");
        imprimir_matriz(N,matrizA);
        printf("\n Matriz B \n");
        imprimir_matriz(N,matrizB);
        sumar_matriz(N,matrizA, matrizB, matrizC);
        printf("\n Matriz C (suma de las dos matrices)\n");
        imprimir_matriz(N, matrizC);
    }else{

        printf("\n Dato erroneo, intentelo de nuevo. \n ");

    }
}