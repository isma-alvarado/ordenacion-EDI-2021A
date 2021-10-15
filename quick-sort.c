#include<stdio.h>
#define N 10




void QuickSort(int arr[N],int izq,int der);


void ImprimeArreglo(int arreglo[N]);

int main()

{
int arreglo[N] ={9,8,7,6,5,4,3,2,1,0};

QuickSort(arreglo,0,N-1);
ImprimeArreglo(arreglo);



return 0;
}

void QuickSort(int arre[N],int izq,int der)
{
/*
1.DIVIDIR EL ARREGLO
2.SELECCIONAR EL PIVOTE
3.RECORRER DERECHA HASTA QUE ENCONTRAMOS UN VALOR MENOR AL PIVOTE O NOS ENCONTREMOS CON PIVOTE izq - decrementar derecha
4.RECORRER IZQUIERDA HASTA QUE ENCONTREMOS UN VALOR MAYOR AL PIVOTE O NOS ECONTREMOS CON PIVOE O CON der- incrementamos izquierda
*/

int pivote = izq; //inicializamos pivote en el indice del inicio del arreglo
int aux;
int inicio=izq;
int fin=der;


    if(inicio<=fin)
    {
        while(der>izq)
        {
            while(der>pivote && arre[der] >= arre[pivote])
            {
                der--; //der- =1;        der = der -1;
            }

            if(arre[der] < arre[pivote])
            {
                aux=arre[der];
                arre[der] = arre[pivote];
                arre[pivote] = aux;

                pivote = der;
            }


            while(izq < pivote && arre[izq] < arre[pivote])
            {
                izq++;
            }

            if(arre[izq]> arre[pivote])
            {
            aux = arre[izq];
            arre[izq] = arre[pivote];
            arre[pivote] = aux;


            pivote = izq;

            }

        }

    QuickSort(arre,inicio,pivote-1);
    QuickSort(arre,pivote+1,fin);


    }



}



void ImprimeArreglo(int arreglo[N])
{
    printf("[");
    for(int i=0;1<N;i++)
    {
        printf("%d",arreglo[i]);

    }

    printf("]");



}

