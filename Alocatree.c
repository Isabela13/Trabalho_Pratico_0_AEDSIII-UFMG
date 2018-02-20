#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "tree.h"

TipoApontador alocaTree(int *v, int n, int tamanhoArvore) //alocacao de memoria para a arvore (no de cima foi para os nos)
{
	if (n <= 0) {
		return NULL;
	}

    TipoApontador SegmentTree = (TipoApontador) calloc((tamanhoArvore+1), sizeof(no));

    Constroi(v, 1, n, SegmentTree, 1);

	return SegmentTree;
}
