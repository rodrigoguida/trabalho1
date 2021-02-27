#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100000

void merge(int vec[], int vecSize){
    int mid;
    int i, j,k;
    int* tmp;
    tmp = (int*)malloc(vecSize * sizeof(int));
    if(tmp==NULL){
        exit(1);
    }
    mid=vecSize/2;
    i=0;
    j=mid;
    k=0;
    while(i<mid && j<vecSize){
        if(vec[i]<vec[j]){
            tmp[k]=vec[i];
            ++i;
        }else{
            tmp[k]=vec[j];
            ++j;
        }
        ++k;
    }
    if(i==mid){
        while(j<vecSize){
            tmp[k]=vec[j];
            ++j;
            ++k;
        }
    }else{
        while(i<mid){
            tmp[k]=vec[i];
            ++i;
            ++k;
        }
    }
    for(i=0;i<vecSize;++i){
        vec[i]=tmp[i];
    }
    free(tmp);
}

void mergesort(int vec[], int vecSize){
    int mid;

    if(vecSize>1){
        mid=vecSize/2;
        mergesort(vec, mid);
        mergesort(vec+mid, vecSize-mid);
        merge(vec, vecSize);
    }
}

void decrescente(int v[], int n){
    int i;
    for(i=0;i<n;i++)
        v[i]=n-i;
}

int main(){

    srand(time(NULL));
    double inicio, fim;
    int v[N];

    decrescente(v, N);
    inicio=(double) clock()/CLOCKS_PER_SEC;
	mergesort(v, N);
    fim=(double) clock()/CLOCKS_PER_SEC;


    printf("Tempo do Mergesort preenchido em ordem decrescente: %f segundos\n", fim-inicio);

}
