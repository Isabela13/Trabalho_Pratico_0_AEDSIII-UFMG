#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "matriz.h"

int* add(int i , int j, int *v){
	int count;
	if(i<j){
		for(count=i;count<=j;count++){
			v[count] = v[count] + 1;
		}
	}
	else{
		for(count=j;count<=i;count++){
		  v[count] = v[count] + 1;
	}
	}
	return v;
}
