/*Autor....................: Pedro Inhesta
  Data.....................: 10/09/2024
  Objetivo.................: mensagem de boas-vindas baseada no turno do dia
/*

#include <stdio.h>

int main() {
    int turno;

    
    printf("Informe o turno do dia (1 para manhã, 2 para tarde, 3 para noite): ");
    scanf("%d", &turno);

   
    switch(turno) {
        case 1:
            printf("Bom dia!\n");
            break;
        case 2:
            printf("Boa tarde!\n");
            break;
        case 3:
            printf("Boa noite!\n");
            break;
        default:
            printf("Erro: turno inválido!\n");
            break;
    }

    return 0;
}