/*************************************
*Fecha: 11 agosto 2022
*Autor: Juan Diego Varon
*Materia: Parallel and Dsitributed computing
*Tema: Multiplicasion Matriz
**************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void multiplicasion_matrices(int N, int matrizA[], int matrizB[], int matrizC[] ){

    int i, j, k, suma_parcial;

    for (i=0; i<N; i++){
		for (j=0; j<N;j++){
		
			suma_parcial =0;
			for (k=0; k<N; k++){
			
				suma_parcial += matrizA[j+k*N]*matrizB[k+i*N];
			}	
	 		matrizC[j+i*N] = suma_parcial;
	 	}
	}
    
}

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
        multiplicasion_matrices(N,matrizA, matrizB, matrizC);
        printf("\n Matriz C (multiplicasion de las dos matrices)\n");
        imprimir_matriz(N, matrizC);
    }else{

        printf("\n Dato erroneo, intentelo de nuevo. \n ");

    }
}