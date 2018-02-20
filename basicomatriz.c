#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "matriz.h"
#include "basicomatriz.h"

int soma(int i , int j, int *v){
	int count;
	int soma=0;
	if(i<j){
		for(count=i;count<=j;count++){
			 soma = soma +v[count];
		}
	}
	else{
		for(count=j;count<=i;count++){
		 soma = soma +v[count]; 
	}
	}
	return soma;
}


int max(int i , int j, int *v){
	int count;
	int max=0;
	if(i<j){
		max=v[i];
		for(count=i;count<=j;count++){
			 if(v[count]>max){
			 	max=v[count];
			 }
		}
	}
	else{
		max=v[j];
		for(count=j;count<=i;count++){
		  if(v[count]>max){
			 	max=v[count];
			 }
	}
	}
	return max;
}

int min(int i , int j, int *v){
	int count;
	int min=0;
	if(i<j){
		min=v[i];
		for(count=i;count<=j;count++){
			 if(v[count]<min){
			 	min=v[count];
			 }
		}
	}
	else{
		min=v[j];
		for(count=j;count<=i;count++){
		  if(v[count]<min){
			 	min=v[count];
			 }
	}
	}
	return min;
}


int* sub(int i , int j, int *v){
	int count;
	if(i<j){
		for(count=i;count<=j;count++){
			v[count] = v[count] - 1;
		}
	}
	else{
		for(count=j;count<=i;count++){
		  v[count] = v[count] - 1;
	}
	}
	return v;
}




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
