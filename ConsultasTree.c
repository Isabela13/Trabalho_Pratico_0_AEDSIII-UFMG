#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "basico.h"
#include "tree.h"
#include "consultas.h"
#define ABSURDO_MAX 9999999
#define ABSURDO_MIN -9999999

int buscaMax(int *v, int i, int j, int limitesq, int limitdir, TipoApontador SegmentTree, int pos)
{
    int meio;
    if (limitesq >= i && limitdir <= j) {
        return SegmentTree[pos].max;
    }
    else if (j < limitesq || i > limitdir) {
        return ABSURDO_MIN;
    }

    meio = (limitesq+limitdir)/2;
    int esq = buscaMax(v, i, j, limitesq, meio, SegmentTree, 2*pos);
    int dir = buscaMax(v, i, j, meio+1, limitdir, SegmentTree, 2*pos+1);

    SegmentTree[pos].max = max(esq, dir);

    return SegmentTree[pos].max;
}






int buscaMin(int *v, int i, int j, int limitesq, int limitdir, TipoApontador SegmentTree, int pos)
{
    int meio;
    if (limitesq >= i && limitdir <= j) {
        return SegmentTree[pos].min;
    }
    else if (j < limitesq || i > limitdir) {
        return ABSURDO_MAX;
    }

    meio = (limitesq+limitdir)/2;
    int esq = buscaMin(v, i, j, limitesq, meio, SegmentTree, 2*pos);
    int dir = buscaMin(v, i, j, meio+1, limitdir, SegmentTree, 2*pos+1);

    SegmentTree[pos].min = min(esq, dir);

    return SegmentTree[pos].min;
}




int buscaSoma(int *v, int i, int j, int limitesq, int limitdir, TipoApontador SegmentTree, int pos)
{
    int meio;
    if (limitesq >= i && limitdir <= j) {
        return SegmentTree[pos].soma;
    }
    else if (j < limitesq || i > limitdir) {
        return 0;
    }

    meio = (limitesq+limitdir)/2;
    int esq = buscaSoma(v, i, j, limitesq, meio, SegmentTree, 2*pos);
    int dir = buscaSoma(v, i, j, meio+1, limitdir, SegmentTree, 2*pos+1);

    SegmentTree[pos].soma = soma(esq, dir);

    return SegmentTree[pos].soma;
}
