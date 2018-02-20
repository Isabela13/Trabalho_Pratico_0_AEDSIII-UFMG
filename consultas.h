#ifndef CONSULTA_H
#define CONSULTA_H

int buscaSoma(int *v, int i, int j, int limitesq, int limitdir, TipoApontador SegmentTree, int pos);
int buscaMin(int *v, int i, int j, int limitesq, int limitdir, TipoApontador SegmentTree, int pos);
int buscaMax(int *v, int i, int j, int limitesq, int limitdir, TipoApontador SegmentTree, int pos);

#endif 