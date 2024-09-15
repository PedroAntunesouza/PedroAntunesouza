#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída, necessária para usar printf e scanf

int main() {
    // Declaração de variáveis
    double n1, n2, resultado; // Variáveis para armazenar os números e o resultado das operações
    char operação; // Variável para armazenar o operador escolhido pelo usuário
    
    // Solicita ao usuário o primeiro número
    printf("Digite um número: ");
    scanf("%lf", &n1); // Lê um número de ponto flutuante (double) e armazena em n1
    
    // Exibe as opções de operadores disponíveis
    printf("+ para adição, - para subtração,\n");
    printf("* para multiplicação, / para dividir\n");
    
    // Solicita ao usuário o operador desejado
    printf("Digite o operador: ");
    scanf(" %c", &operação); // Lê um caractere (operador) e armazena em operação. O espaço antes de %c é para ignorar espaços em branco

    // Solicita ao usuário o segundo número
    printf("Digite outro número: ");
    scanf("%lf", &n2); // Lê um número de ponto flutuante (double) e armazena em n2

    // Executa a operação escolhida pelo usuário
    switch (operação) {
        case '+': // Caso o operador seja '+'
            resultado = n1 + n2; // Calcula a soma de n1 e n2 e armazena em resultado
            printf("Resultado: %.2lf\n", resultado); // Exibe o resultado com duas casas decimais
            break; // Sai do bloco switch

        case '-': // Caso o operador seja '-'
            resultado = n1 - n2; // Calcula a subtração de n1 e n2 e armazena em resultado
            printf("Resultado: %.2lf\n", resultado); // Exibe o resultado com duas casas decimais
            break; // Sai do bloco switch

        case '*': // Caso o operador seja '*'
            resultado = n1 * n2; // Calcula a multiplicação de n1 e n2 e armazena em resultado
            printf("Resultado: %.2lf\n", resultado); // Exibe o resultado com duas casas decimais
            break; // Sai do bloco switch

        case '/': // Caso o operador seja '/'
            if (n2 != 0) { // Verifica se o divisor (n2) não é zero
                resultado = n1 / n2; // Calcula a divisão de n1 por n2 e armazena em resultado
                printf("Resultado: %.2lf\n", resultado); // Exibe o resultado com duas casas decimais
            } else { // Se o divisor for zero
                printf("Erro: Divisão por zero!\n"); // Exibe uma mensagem de erro
            }
            break; // Sai do bloco switch

        default: // Caso o operador não seja reconhecido
            printf("Operação inválida!\n"); // Exibe uma mensagem de erro para operador inválido
            break; // Sai do bloco switch
    }

    return 0; // Retorna 0, indicando que o programa terminou com sucesso
}
