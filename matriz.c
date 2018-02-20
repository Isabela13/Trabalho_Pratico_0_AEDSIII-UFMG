#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "matriz.h"
#include "basicomatriz.h"

int main() {
	int i, j ,*v,n,m,k,l;
	char operacoes[3];
	Operacoes **M;
    	if (scanf("%d %d",&n,&m) != 0){
		v = (int*) malloc((n+1)*sizeof(int));// aloca memoria dinamicamente para o velor v com o n passado na arquivo de entrada
		for(k=1;k<=n;k++){ // le cada linha do arquivo e grava em uma posição do vetor v
			if(scanf("%d",&v[k])!=0){}
		}
		M= ConstroiMatriz(n , v);

		for (l=1;l<=m;l++){
			if (scanf("%s %d %d \n",operacoes,&i,&j)!=0){
				if (strcmp(operacoes , "Sum") == 0){
					printf("%d\n",M[i][j].soma);
				}else if  (strcmp(operacoes , "Sub") == 0){
					LiberaMatriz(n,M);
					v = sub(i,j,v);
					M= ConstroiMatriz(n , v);
			
				}else if  (strcmp(operacoes , "Max") == 0){
					printf("%d\n",M[i][j].max);
				}else if  (strcmp(operacoes , "Min") == 0){
					printf("%d\n",M[i][j].min);
				}else if  (strcmp(operacoes , "Add") == 0){
					LiberaMatriz(n,M);
					v = add(i,j,v);
					M= ConstroiMatriz(n , v);		
				}
			}
		}
	}
	//LiberaMatriz(n,M);
	//free(v);
	return 0;
}



	
