/*Angeles Pérez Abril Monserrat
Práctica 8
Ejercicio 2*/

#include<stdio.h>
int main()
{
  int i,j,a[5][5];
  for (i=0 ; i<5 ; i++)//Renglón del arreglo
  {
    for (j=0 ; j<5 ; j++)//Columna del arreglo
    {
      a[i][j]=i+j;
      printf("\t%d, ",a[i][j]);
    }
    printf("\n");
  }
  return 0;
}
