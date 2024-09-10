//exibir numeros de 1 até 100 mas de 10 em 10
#include <stdio.h>

int main () {
    int cont=0; //variável do contador
    for (cont = 0;cont <= 100; cont+=10){ //looping q vai adicionando +10 no contador enquanto ele não for menor ou igual a 100
    printf("%i\n", cont); //exibe os numeros da variavel cont, mas com o \n pula uma linha na exibição 
  }
}