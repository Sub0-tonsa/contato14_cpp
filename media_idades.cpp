/*
	Name: media_idades.cpp
	Author: Giovanni Tonsa
	Date: 01/12/25 22:35
	Description: Calcula as medias das idades em homens e mulheres
*/

#include <stdio.h>

main() {
    int qtd, i;
    char sexo;
    int idade;
    int somaHomens = 0, somaMulheres = 0;
    int contHomens = 0, contMulheres = 0;

    printf("Digite a quantidade de pessoas na pesquisa: ");
    scanf("%d", &qtd);

    for (i = 0; i < qtd; i++) {
        printf("\nPessoa %d\n", i + 1);
        printf("Digite o sexo (H para homem, M para mulher): ");
        scanf(" %c", &sexo); // espaço antes de %c para ignorar enter
        printf("Digite a idade: ");
        scanf("%d", &idade);

        if (sexo == 'H' || sexo == 'h') {
            somaHomens += idade;
            contHomens++;
        } else if (sexo == 'M' || sexo == 'm') {
            somaMulheres += idade;
            contMulheres++;
        } else {
            printf("Sexo inválido!\n");
        }
    }

    printf("\nResultados:\n");
    if (contHomens > 0)
        printf("Idade média dos homens: %.2f\n", (float)somaHomens / contHomens);
    else
        printf("Nenhum homem informado.\n");

    if (contMulheres > 0)
        printf("Idade média das mulheres: %.2f\n", (float)somaMulheres / contMulheres);
    else
        printf("Nenhuma mulher informada.\n");

    return 0;
}
