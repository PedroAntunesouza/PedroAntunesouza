// Inclui a biblioteca padrão de entrada e saída, necessária para usar funções como printf() e scanf()
#include<stdio.h>

// Função principal que inicia a execução do programa
int main(){

    // Declara uma variável inteira 'n' com o valor 5 (o número de entradas que serão feitas)
    // Declara uma variável inteira 'num' que será usada para armazenar cada número digitado
    // Declara uma variável do tipo double 'soma' para armazenar a soma dos números, inicializada em 0
    int n=5, num;
    double soma=0;

    // Loop que será executado 5 vezes (de 1 até 5), controlado pela variável 'cont'
    for (int cont = 1; cont <= n; cont++){

        // Exibe uma mensagem para o usuário pedindo para digitar o próximo número
        // A variável 'cont' é usada para mostrar qual o número atual a ser digitado (1º, 2º, etc.)
        printf("Digite o %iº número ", cont);

        // Recebe o número digitado pelo usuário e armazena na variável 'num'
        scanf("%i", &num);

        // Adiciona o valor digitado (armazenado em 'num') à variável 'soma'
        soma += num;
    }

    // Após o fim do loop, exibe a média dos números digitados
    // A média é calculada dividindo a soma total pelo número de entradas (n)
    // O formato "%10.2f" indica que o valor será exibido com 10 espaços e 2 casas decimais
    printf("A média é %10.2f", soma / n);

}