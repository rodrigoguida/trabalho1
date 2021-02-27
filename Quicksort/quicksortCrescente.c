#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100000

void quicksort(int values[], int began, int end)
{
    int i, j, pivo, aux;
    i=began;
    j=end-1;
    pivo=values[began];
    while(i<=j)
    {
        while(values[i] < pivo && i < end) i++;
        while(values[j] > pivo && j > began) j--;
        if(i<=j)
        {
            aux=values[i];
            values[i]=values[j];
            values[j]=aux;
            i++;
            j--;
        }
    }
    if(j>began)
        quicksort(values, began, j+1);
    if(i<end)
        quicksort(values, i, end);
}

void crescente(int v[], int n){
    int i;
    for(i=0;i<n;i++)
        v[i]=i;
}

int main(){

    srand(time(NULL));
    double inicio, fim;
    int v[N];

    crescente(v, N);
    inicio=(double) clock()/CLOCKS_PER_SEC;
	quicksort(v, 0, N);
    fim=(double) clock()/CLOCKS_PER_SEC;


    printf("Tempo do Quicksort preenchido em ordem crescente: %f segundos\n", fim-inicio);

}
