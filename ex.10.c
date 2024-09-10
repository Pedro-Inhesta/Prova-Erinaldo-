/*Autor....................: Pedro Inhesta
  Data.....................: 09/09/2024
  Objetivo.................: salário bruto de uma pessoa e calcule o valor da contribuição ao INSS
/*

#include <stdio.h>

float calculaINSS(float salario) {
float contribuicao = 0.0;

if (salario <= 1320.00) {
    contribuicao = salario * 0.075;
} else if (salario <= 2571.29) {
    contribuicao = 1320.00 * 0.075 + (salario - 1320.00) * 0.09;
} else if (salario <= 3856.94) {
    contribuicao = 1320.00 * 0.075 + (2571.29 - 1320.00) * 0.09 + (salario - 2571.29) * 0.12;
} else if (salario <= 7507.49) {
    contribuicao = 1320.00 * 0.075 + (2571.29 - 1320.00) * 0.09 + (3856.94 - 2571.29) * 0.12 + (salario - 3856.94) * 0.14;
} else {
    contribuicao = 1320.00 * 0.075 + (2571.29 - 1320.00) * 0.09 + (3856.94 - 2571.29) * 0.12 + (7507.49 - 3856.94) * 0.14;
}

return contribuicao;
}

int main() {
float salario;

printf("Digite o valor do salário bruto: ");
scanf("%f", &salario);

float inss = calculaINSS(salario);
printf("O valor da contribuição ao INSS é: R$ %.2f\n", inss);

return 0;
}