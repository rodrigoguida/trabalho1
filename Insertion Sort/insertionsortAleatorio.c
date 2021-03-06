#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100000

void insertionSort(int vetor[], int n)
{
    int j, temp;
    for(int i=1;i<n;i++)
    {
        temp=vetor[i];
        j=i-1;
        while(j>=0 && temp < vetor[j])
        {
            vetor[j+1]=vetor[j];
            j--;
        }
        vetor[j+1]=temp;
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
	insertionSort(v, N);
    fim=(double) clock()/CLOCKS_PER_SEC;


    printf("Tempo do Insertion Sort preenchido aleatoriamente: %f segundos\n", fim-inicio);

}
