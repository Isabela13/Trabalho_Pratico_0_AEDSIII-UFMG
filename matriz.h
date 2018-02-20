#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Operacoes
{
	int soma;
	int max;
	int min;
}Operacoes;


Operacoes** ConstroiMatriz(int tamanhov , int *v );
int LiberaMatriz(int n, Operacoes **M);
