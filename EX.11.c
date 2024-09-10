/*Autor....................: Pedro Inhesta
  Data.....................: 09/09/2024
  Objetivo.................: a o valor de um produto e calcule o valor do desconto de ICMS
/*
#include <stdio.h>

float calculaDescontoICMS(float valorProduto) {
float desconto;

if (valorProduto <= 1000.00) {
    desconto = valorProduto * 0.05;
} else if (valorProduto <= 5000.00) {
    desconto = valorProduto * 0.10;
} else {
    desconto = valorProduto * 0.15;
}

return desconto;
}

int main() {
float valorProduto;

printf("Digite o valor do produto: R$ ");
scanf("%f", &valorProduto);

float desconto = calculaDescontoICMS(valorProduto);
printf("O valor do desconto de ICMS é: R$ %.2f\n", desconto);

return 0;
}