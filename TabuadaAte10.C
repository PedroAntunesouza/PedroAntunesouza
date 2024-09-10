#include<stdio.h>

int main()
{
    int n; //variavel q vai guardar o valor q o usuário digitar
    int cont; //variavel do contador da tabuada de 0 ate 10
    printf ("digite um numero para exibir sua tabuada"); //o usuário vai digitar o número pra escolher qual tabuada quer
    scanf ("%i", &n); //vai atribuir o que ele escreveu na variavel n
    for (cont = 0; cont <=10; cont++){ //contador do número q vai multiplicar pelo que o usuario escreveu, até 10
        printf("%i X %i = %i\n", n, cont, n*cont); //a conta
        
    }
}