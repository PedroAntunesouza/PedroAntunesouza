//exibir numeros de 1 até 100
#include <stdio.h>

int main () {
    int cont=1; //variável do contador
    for (cont = 1;cont <= 100; cont++){ //looping q vai adicionando +1 no contador enquanto ele não for menor ou igual a 100
    printf("%i\n", cont); //exibe os numeros da variavel cont, mas com o \n pula uma linha na exibição 
  }
}