#include<stdio.h>
#define N 10


void LeeArreglo(int arr[N],int numero);

void OrdenacionSeleccion(int arr[N],int numero);

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
    OrdenacionSeleccion(arreglo,num);
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



void OrdenacionSeleccion(int arr[N],int numero)
{
    int i,j;
    int aux,minimo;


    for(i=0;i<numero-1;i++)
    {
        minimo=i;
       for(j=i+1;j<numero;j++)
        {
            if(arr[j]<arr[i])
            {
         //hay intercambio
            aux=arr[j];
            arr[j]=arr[i];
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
        printf("\n arreglo [%d]: %d ",i+1,arr[i]);

    }
}






/*
void OrdenacionSeleccion(int arr[N],int numero)
{
    int actual,posicion;
    int aux;


    for(actual=0;actual<numero-1;actual++)
    {
       for(posicion=actual+1;posicion<numero;posicion++)

        {
            //hay intercambio
            aux=arr[posicion];
            arr[posicion]=arr[actual];
            arr[actual]=aux;


        }








    }


    }
    */

