#include <stdio.h>
#include "funcoes2.h"

//testar essa funcao
int ehPrimo(int num){
    int c=0,p=2;

    while(c==0 && p<=n % 2){
        if(n%p==0)
        {
            c = 1;
            p++;
        }
    }
    return c;
}


double potencia(double x, int y)
{
  if(y==0)
    return 1;
  while(y>1)
  {
    x*=x;
    y--;
  }
  return x;
}

float media(float n1, float n2){
    float resultado;
    resultado = (n1+n2)/2;
    return resultado;
}

float raiz_quadrada (float numero)
{
    int n;
    float recorre = numero;
    
    for (n = 0; n < 10; ++n)
        recorre = recorre/2 + numero/(2*recorre);
            
    return recorre;    
}

int fatorial(int n){
    int i, fat;
    if(n=0)
        return 1;
    fat=1;
    for(i=1;i<n;i++)
    {
        fat = fat * i;

    }
    return fat;
}


int perfeito(int n)
{
  int soma = 0;
  
  for(int i = 1; i < n; ++i)
  {
    soma = soma + i;
    if (n == soma)
        return 0; // é perfeito
  }

  return -1; // não é perfeito
}
