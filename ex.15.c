/*Autor....................: Pedro Inhesta
  Data.....................: 10/09/2024
  Objetivo.................:  converta um valor monetário entre três moedas: real (BRL), dólar (USD) e euro (EUR)
/*
#include <stdio.h>

float converteMoeda(char origem, char destino, float valor) {
float valorConvertido = 0.0;

if (origem == 'B' && destino == 'U') {
    valorConvertido = valor * 0.19; // BRL para USD
} else if (origem == 'B' && destino == 'E') {
    valorConvertido = valor * 0.16; // BRL para EUR
} else if (origem == 'U' && destino == 'B') {
    valorConvertido = valor * 5.30; // USD para BRL
} else if (origem == 'E' && destino == 'B') {
    valorConvertido = valor * 6.20; // EUR para BRL
} else if (origem == 'U' && destino == 'E') {
    valorConvertido = valor * (5.30 / 6.20); // USD para EUR
} else if (origem == 'E' && destino == 'U') {
    valorConvertido = valor * (6.20 / 5.30); // EUR para USD
} else {
    printf("Erro: Moeda não reconhecida.\n");
    return -1;
}

return valorConvertido;
}

int main() {
char origem, destino;
float valor, resultado;

printf("Informe a moeda de origem (B para BRL, U para USD, E para EUR): ");
scanf(" %c", &origem);
printf("Informe a moeda de destino (B para BRL, U para USD, E para EUR): ");
scanf(" %c", &destino);
printf("Informe o valor a ser convertido: ");
scanf("%f", &valor);

resultado = converteMoeda(origem, destino, valor);

if (resultado != -1) {
    printf("O valor convertido é: %.2f\n", resultado);
}

return 0;
}