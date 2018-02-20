#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "tree.h"
#include "basico.h"

void Reconstroi(int *v, int i, int j, int limitesq, int limitdir, TipoApontador SegmentTree, int pos)
{
    int meio;
    if (limitesq >= i && limitdir <= j) {
        SegmentTree[pos].min = v[i];
        SegmentTree[pos].max = v[i];
        SegmentTree[pos].soma = v[i];
        return;
    }else if (j < limitesq || i > limitdir) {
        return;
    }

    meio = (limitesq+limitdir)/2;

    Reconstroi(v, i, j, limitesq, meio, SegmentTree, 2*pos);
    Reconstroi(v, i, j, meio+1, limitdir, SegmentTree, 2*pos+1);

    no esq = SegmentTree[2*pos];
    no dir = SegmentTree[2*pos+1];
    
    SegmentTree[pos].min = min(esq.min, dir.min);
    SegmentTree[pos].max = max(esq.max, dir.max);
    SegmentTree[pos].soma = soma(esq.soma, dir.soma);
}

