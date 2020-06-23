/*22. Escriba un programa para ilustrar el uso de un puntero que apunta a una matriz 2D
 *

 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
//PROTOTIPOS
void llenarMatrizA(int (*)[3]);
void llenarMatrizB(int (*)[3]);
void sumaMatrices(int  (*)[3],int  (*)[3], int (*)[3]);



int main()
{
    int i,j;
    int matrizA [3][3];
	int matrizB [3][3];
	int matrizC [3][3];

	printf("SUMA DE MATRICES 3X3 , CON PUNTEROS: \n");

    llenarMatrizA(matrizA);
    llenarMatrizB(matrizB);
    sumaMatrices(matrizA,matrizB,matrizC);


}

//SUBPROGRAMAS
	     // Matriz A
    	void llenarMatrizA(int (*matrizA) [3]){
    		int i,j;
    		printf("Ingrese los elementos de la matriz A:\n");
    			       for(i=0; i<3; i++){
    			            for(j=0; j<3; j++){
    			            	printf("A[%d],", i);
    			            	printf("[%d]:", j);
    			            	scanf("%d",&(matrizA[i][j]));
    			            }
    			        }

    		}

	      // Matriz B
    	void llenarMatrizB(int (*matrizB) [3]){
    		int i,j;
    		printf("Ingrese los elementos de la matriz B:\n");
    				for(i=0; i<3; i++){
    					for(j=0; j<3; j++){
    			            	printf("B[%d],", i);
    			            	printf("[%d]:", j);
    			            	scanf("%d",& (matrizB [i][j]));
    			            }
    			        }

    		}

	        //C = XA+YB
    	void sumaMatrices(int (*matrizA) [3],int (*matrizB)[3],int (*matrizC)[3]){
    	    int i,j;
    		printf("La Suma de Matrices es : ");
    		for(i=0; i<3; i++){
    			printf("\n");
    				for(j=0; j<3; j++){
    					(*(matrizC+i))[j] = (*(matrizB+i))[j] +(*(matrizA+i))[j];
    			        printf("\t %d",*(*(matrizC + i)+j));

    			     }
    			}
    	}





