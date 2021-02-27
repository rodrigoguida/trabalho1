#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100000

void bubbleSort(int array[], int length)
{
    int i, j;
    for(i=length-1;i>0; i--) {
        for(j=0;j<i;j++) {
            if(array[j]> rray[j+1])
            {
                int temp;
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
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
	bubbleSort(v, N);
    fim=(double) clock()/CLOCKS_PER_SEC;


    printf("Tempo do Bubble Sort preenchido aleatoriamente: %f segundos\n", fim-inicio);

}
