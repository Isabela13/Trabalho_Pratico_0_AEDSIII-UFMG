#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "matriz.h"
#include "basicomatriz.h"

Operacoes** ConstroiMatriz(int tamanhov , int *v ){
	int a,b;
	Operacoes **M = (Operacoes**) malloc((tamanhov+1)*sizeof(Operacoes*));
	for(a=1;a<=tamanhov;a++){
		M[a] = (Operacoes*) malloc((tamanhov+1) * sizeof(Operacoes));
		for ( b = 1; b <= tamanhov; b++){
			M[a][b].min=min(a,b,v);
			M[a][b].max=max(a,b,v);
			M[a][b].soma=soma(a,b,v);
		}
	}
	return M;
}

