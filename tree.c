#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "basico.h"
#include "tree.h"
#include "consultas.h"



int main(){
    int n ,m, count, *v, i,j,l, tamanhoArvore;
    char operacoes[4];
	if (scanf("%d %d", &n,&m)!=0){
        v = (int*) malloc((n+1)*sizeof(int));

        for (count = 1; count <= n; count++) {
            if (scanf("%d", &v[count])!=0){}
        }

        tamanhoArvore = pow(2, ceil(log2(2*n-1)));
        TipoApontador SegmentTree ;
        SegmentTree  = alocaTree(v, n, tamanhoArvore);
                            


		for (l=0;l<m;l++){
            if (scanf("%s %d %d", operacoes, &i, &j)!=0){
                if (strcmp(operacoes , "Sum") == 0){
                    printf("Sum %d\n", buscaSoma(v, i, j, 1, n, SegmentTree, 1));
				}else if (strcmp(operacoes , "Max") == 0){
                    printf("Max %d\n", buscaMax(v, i, j, 1, n, SegmentTree, 1));
				}else if (strcmp(operacoes , "Min") == 0){
                    printf("Min %d\n", buscaMin(v, i, j, 1, n, SegmentTree, 1));
				}else if (strcmp(operacoes , "Add") == 0){
                    Add(i,j,v);
                    Reconstroi(v, i, j, 1, n, SegmentTree, 1);
                }else if (strcmp(operacoes , "Sub") == 0){
                    Sub(i,j,v);
                    Reconstroi(v, i, j, 1, n, SegmentTree, 1);
                }
			}
		}
	}	

}
