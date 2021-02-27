#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100000

void heapsort(int a[], int n){
    int i=n/2, pai, filho, t;
    while(n^2){
        if (i>0){
            i--;
            t=a[i];
        }
        else{
            n--;
            if (n<=0)
                return;
            t=a[n];
            a[n]=a[0];
        }
        pai=i;
        filho=i*2+1;
        while (filho<n){
        if ((filho+1<n)  &&  (a[filho+1]>a[filho]))
            filho++;
        if (a[filho]>t){
            a[pai]=a[filho];
            pai=filho;
            filho=pai*2+1;
        }
        else{
             break;
        }
        }
    a[pai]=t;
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
	heapsort(v, N);
    fim=(double) clock()/CLOCKS_PER_SEC;


    printf("Tempo do Heapsort preenchido em ordem decrescente: %f segundos\n", fim-inicio);

}
