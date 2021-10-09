#include<stdio.h>
#define N 10


void LeeArreglo(int arr[N],int numero);

void OrdenacionInsersion(int arr[N],int numero);

void ImprimeArreglo(int arr[N],int numero);
int main()

{
int arreglo[N];
int num;

printf(" \n Dime el tamanio del arreglo \n");
scanf("%d",&num);
    if(num>0 && num<=10)
    {

    LeeArreglo(arreglo,num);
    OrdenacionInsersion(arreglo,num);
    printf("\n\n");
    ImprimeArreglo(arreglo,num);

    }
    else
    {
      printf("\n ELIGE UM NUMERO DENTRO DEL RANGO 1 A 10 \n");
    }



return 0;
}


void LeeArreglo(int arr[N], int numero)
{
    int i;

    for(i=0;i<numero;i++)
    {
        printf("arreglo [%d]: ",i+1);
        scanf("%d",&arr[i]);
    }
}



void OrdenacionInsersion(int arr[N],int numero)
{
    int actual,mover;
    int aux;


    for(actual=1;actual<numero;actual++)
    {
        mover=actual;
        while(arr[mover]<arr[mover-1]&&mover>0)
        {
            aux=arr[mover];
            arr[mover]=arr[mover-1];
            arr[mover-1]=aux;   //mover--

            mover=mover-1;
        }



    }
}


void ImprimeArreglo(int arr[N],int numero)
{
  int i;

   printf("\n ASCENDENTE \n");
   for(i=0;i<numero;i++)
    {
        printf(" arreglo [%d]: %d ",i+1,arr[i]);
        printf("\n");
    }

   printf("\n DESCENDENTE");
   for(i=numero-1;i>=0;i--)
    {
        printf("\n arreglo [%d]: %d ",i+1,arr[i]);

    }
}
