#include <stdio.h>

int main () {
    int n;
    printf("Digite um número:");
    scanf("%i", &n); // o %i le um numero inteiro e armazena na variável que deve ter o & antes, no caso aqui, o n fica &n
    if (n % 2 == 0){ // se o resto da divisao de n por 2 for igual a 0 é par, o resto é calculado pelo %, para exemplificar, 4/2 sobra 0, então é par, agora 5/2 sobra 1, então é ímpar
        printf("É par!");
    }
    else {
        printf("É ímpar!");
    }
}
