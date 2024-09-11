#include<stdio.h>

int main()
{
    int n, qtdDiv = 0; //um numero e quantos divisores ele tem
    printf ("Digite um numero para saber quantos divisores têm:");
    scanf ("%i", &n);
    for (int cont = 1; cont <= n; cont++){ //vai adicionar +1 no contador ate n, looping basico
        if (n % cont == 0 ) { //o resto 0 só acontece com um numero q é divisor de n
            qtdDiv++; 
            printf("%i É um divisor.\n", cont);
        }
    }
    printf("%i tem %i divisores", n, qtdDiv);
}