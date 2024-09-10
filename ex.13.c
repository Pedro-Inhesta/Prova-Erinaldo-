/*Autor....................: Pedro Inhesta
  Data.....................: 10/09/2024
  Objetivo.................: simule uma calculadora simples
/*

#include <stdio.h>

void calculadora(char operacao, float num1, float num2) {
float resultado;

switch (operacao) {
    case '+':
        resultado = num1 + num2;
        printf("Resultado: %.2f\n", resultado);
        break;
    case '-':
        resultado = num1 - num2;
        printf("Resultado: %.2f\n", resultado);
        break;
    case '*':
        resultado = num1 * num2;
        printf("Resultado: %.2f\n", resultado);
        break;
    case '/':
        if (num2 != 0) {
            resultado = num1 / num2;
            printf("Resultado: %.2f\n", resultado);
        } else {
            printf("Erro: Divisão por zero não é permitida.\n");
        }
        break;
    default:
        printf("Erro: Operação não reconhecida.\n");
        break;
}
}

int main() {
char operacao;
float num1, num2;

printf("Escolha a operação (+, -, *, /): ");
scanf(" %c", &operacao);
printf("Digite o primeiro número: ");
scanf("%f", &num1);
printf("Digite o segundo número: ");
scanf("%f", &num2);

calculadora(operacao, num1, num2);

return 0;
}