all: matriz tree

matriz: operacoes.o  liberaMatriz.o basicomatriz.o
	gcc matriz.c operacoes.o basicomatriz.o liberaMatriz.o  -o matriz.out -Wall  -Wextra  -Werror   -std=c99 -pedantic -O2


operacoes.o: operacoes.c
	gcc -c operacoes.c


basicomatriz.o: basicomatriz.c
	gcc -c basicomatriz.c

liberaMatriz.o: liberaMatriz.c
	gcc -c liberaMatriz.c


tree: BasicoTree.o Alocatree.o ReconstroiTree.o ConstroiTree.o ConsultasTree.o
	gcc  tree.c ReconstroiTree.o BasicoTree.o Alocatree.o  ConstroiTree.o ConsultasTree.o   -o tree.out -Wall  -Wextra  -Werror   -std=c99 -pedantic -O2 -lm

BasicoTree.o: BasicoTree.c
	gcc  -c BasicoTree.c

Alocatree.o: Alocatree.c
	gcc  -c Alocatree.c

ConsultasTree.o: ConsultasTree.c
	gcc  -c ConsultasTree.c

ConstroiTree.o: ConstroiTree.c
	gcc  -c ConstroiTree.c


ReconstroiTree.o: ReconstroiTree.c
	gcc  -c ReconstroiTree.c	

clean:  
	rm *.o
