#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "matriz.h"


int LiberaMatriz(int n, Operacoes **M){
	int i;
	for(i=1;i<=n;i++){
		free(M[i]);
	}
	free(M);

}