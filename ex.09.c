/*Autor....................: Pedro Inhesta
  Data.....................: 09/09/2024
  Objetivo.................:  o salário bruto de uma pessoa e calcule o valor do Imposto de Renda
/*

#include <stdio.h>

void calculaIRRF(float salario) {
float imposto;

if (salario <= 2112.00) {
    imposto = 0.0;
} else if (salario <= 2826.65) {
    imposto = salario * 0.075 - 158.40;
} else if (salario <= 3751.05) {
    imposto = salario * 0.15 - 370.40;
} else if (salario <= 4664.68) {
    imposto = salario * 0.225 - 651.73;
} else {
    imposto = salario * 0.275 - 884.96;
}

printf("O valor do imposto a ser pago é: R$ %.2f\n", imposto);
}

int main() {
float salario;

printf("Digite o valor do salário bruto: ");
scanf("%f", &salario);

calculaIRRF(salario);

return 0;
}
