#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100000

void selectionSort(int vetor[], int n){
    int min, temp;

    for(int i=0;i<n;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(vetor[j]<vetor[min]){
                min=j;
            }
        }
        if(vetor[i]!=vetor[min]){
            temp=vetor[i];
            vetor[i]=vetor[min];
            vetor[min]=temp;
        }
    }
}

void aleatorio(int v[], int n){
    int i;
    for(i=0;i<n;i++)
        v[i]=rand();
}

int main(){

    srand(time(NULL));
    double inicio, fim;
    int v[N];

    aleatorio(v, N);
    inicio=(double) clock()/CLOCKS_PER_SEC;
	selectionSort(v, N);
    fim=(double) clock()/CLOCKS_PER_SEC;


    printf("Tempo do Selection Sort preenchido aleatoriamente: %f segundos\n", fim-inicio);

}
