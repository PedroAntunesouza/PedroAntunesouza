#include<stdio.h>

int main(){
  int pares = 0;
  int vet[] = {52, 27, 81, 95, 74, 63, 25, 464, 11, 22};
  for (int cont = 0; cont < 10; cont++){
     if (vet[cont] % 2 ==0){
         pares++;
         printf ("%d\n", vet[cont]);
     }
  }
  printf ("total de %d pares", pares);
}