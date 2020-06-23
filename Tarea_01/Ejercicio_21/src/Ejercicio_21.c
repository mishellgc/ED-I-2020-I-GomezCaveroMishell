/*
 ============================================================================
21Escriba un programa para calcular XA + YB donde A y B son matrices y X = 2 e Y = 3. **

 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

void llenarMatrizA(int matrizA [10][10], int );
void llenarMatrizB(int matrizB [10][10], int );
void mostrarMatrizC(int matrizA [10][10],int matrizB [10][10],int matrizC [10][10], int );

int x=2;
int y=3;

int main()
{
    int i,j,n;
    int matrizA [10][10];
	int matrizB [10][10];
	int matrizC [10][10];

	printf("Ingrese el tamaño de la matriz cuadrada A y B : \n");
    scanf("%d",&n);
    llenarMatrizA(matrizA,n);
    llenarMatrizB(matrizB,n);
    mostrarMatrizC(matrizA,matrizB,matrizC,n);

}

//SUBPROGRAMAS
	     // Matriz A
    	void llenarMatrizA(int matrizA [10][10], int n){
    		int i,j;
    		printf("Ingrese los elementos de la matriz A:\n");
    			       for(i =0; i<n; i++){
    			            for(j=0; j<n; j++){
    			            	printf("A[%d],", i);
    			            	printf("[%d]:", j);
    			            	scanf("%d",&matrizA [i][j]);
    			            }
    			        }

    		}

	      // Matriz B
    	void llenarMatrizB(int matrizB [10][10], int n){
    		int i,j;
    		printf("Ingrese los elementos de la matriz B:\n");
    				for(i=0; i<n; i++){
    					for(j=0; j<n; j++){
    			            	printf("B[%d],", i);
    			            	printf("[%d]:", j);
    			            	scanf("%d",&matrizB [i][j]);
    			            }
    			        }

    		}

	        //C = XA+YB
    	void mostrarMatrizC(int matrizA [10][10],int matrizB [10][10],int matrizC [10][10], int n){
    	    int i,j;
    		printf("La matriz C = XA +YB es :\n ");
    		for(i=0; i<n; i++){
    			printf("\n");
    				for(j=0; j<n; j++){
    					matrizC[i][j] = x*matrizA[i][j] + y*matrizB[i][j];
    		            printf("\t C[%d],", i);
    			        printf("[%d]:", j);
    			        printf("\t %d",matrizC[i][j]);

    			     }
    			}
    	}





