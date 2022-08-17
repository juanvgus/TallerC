/*************************************
*Fecha: 11 agosto 2022
*Autor: Juan Diego Varon
*Materia: Parallel and Dsitributed computing
*Tema: Matriz de "1"
**************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void inicializar_matrices(int N, int matrizA[]){

    int i, j;

    for (i=0; i<N; i++){
	
		for (j=0; j<N;j++){
			matrizA[i+j*N]=1;
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

int main(){

    int N, size;
    printf("\n Ingrese el numero de tamano de la matriz(1-7): ");
    scanf("%d",&N);
    
    int matriz[N*N];

    if (0< N&& N<8)
    {
        inicializar_matrices(N,matriz);
        imprimir_matriz(N,matriz);
    }else{

        printf("\n Dato erroneo, intentelo de nuevo. \n ");

    }
}