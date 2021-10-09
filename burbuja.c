#include<stdio.h>
#include<stdlib.h>
#define N 10


void LeeArreglo(int arr[N],int numero);

void OrdenacionBurbuja(int arr[N],int numero);

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
    OrdenacionBurbuja(arreglo,num);
    printf("\n\n");
    ImprimeArreglo(arreglo,num);
    printf("\n\n");
}
else
{
      printf("\n ELIGE UM NUMERO DENTRO DEL RANGO 1 A 10 \n");
}
system("pause");

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



void OrdenacionBurbuja(int arr[N],int numero)
{
    int i,j;
    int aux;


    for(j=0;j<(numero-1);j++)
   {
        for(i=0;i<numero-(j+1);i++)
        {
         if(arr[i]>arr[i+1])    //si numero acual es mayor a numero siguiente
         {                                     // CAMBIO
            aux=arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=aux;
            }
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
        printf("\n arreglo [%d]: %d ",i,arr[i]);

    }
}

