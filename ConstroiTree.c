#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "basico.h"
#include "tree.h"


// funcao que ira construir a arvore
no Constroi(int *v, int i, int j, TipoApontador SegmentTree, int pos)
{
    int meio;

    if (i == j) {
        SegmentTree[pos].min = v[i];
        SegmentTree[pos].max = v[i];
        SegmentTree[pos].soma = v[i];
        return SegmentTree[pos];
    }

    meio = (i+j)/2;
    no  esq = Constroi(v, i, meio, SegmentTree, 2*pos);
    no  dir = Constroi(v, meio+1, j, SegmentTree, 2*pos+1);

    SegmentTree[pos].min = min(esq.min, dir.min);
    SegmentTree[pos].max = max(esq.max, dir.max);
    SegmentTree[pos].soma = soma(esq.soma, dir.soma);

    return SegmentTree[pos];
}
