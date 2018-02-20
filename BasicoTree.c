#include "basico.h"

int max(int x, int y) {
    if (x > y) {
        return x;
    }
    return y;
}

int min(int x, int y) {
    if (x < y) {
        return x;
    }
    return y;
}

int soma(int x, int y) {
    return x + y;
}

void Add(int i , int j, int *v){
    int count = 0;
    if(i<j){
        for(count=i;count<=j;count++){
            v[count] = v[count] + 1;
        }
    }
    else{
          v[i] = v[i] + 1;
    }
}

void Sub(int i , int j, int *v){
    int count = 0;
    if(i<j){
        for(count=i;count<=j;count++){
            v[count] = v[count] - 1;
        }
    }
    else{
          v[i] = v[i] - 1;
    }
}
