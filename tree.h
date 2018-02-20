#ifndef TREE_H
#define TREE_H

typedef struct no * TipoApontador;

typedef struct no {
    int soma,min,max;
} no;

TipoApontador alocaTree(int *v, int n, int tamanhoArvore) ;
no Constroi(int *v, int i, int j, TipoApontador SegmentTree, int pos);

void Reconstroi(int *v, int i, int j, int limitesq, int limitdir, TipoApontador SegmentTree, int pos);


#endif // TREE_H
