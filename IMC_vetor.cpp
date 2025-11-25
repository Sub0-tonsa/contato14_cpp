/*
	Name: IMC_vetor.cpp
	Author: Giovanni Tonsa
	Date: 25/11/25 11:17
	Description: Calcular o IMC de uma população, e amarzene no vetor
*/

# include <stdio.h>

main()
{
	float vet[5000];
	int i; 
	float peso, altura, imc;
	i = 0;
	peso = altura = imc = 0.0;
	while(i < 5000)
	{
		printf("Digite a altura de uma pessoa: ");
		scanf("%f", &altura);
		printf("Digite o pesos de uma pessoa: ");
		scanf("%f", &peso);
		imc = peso / (altura * altura);
		vet[i] = imc;
		i++;
	}
	
	puts("\nConteudo do vetor: ");
	i = 0;
	while(i < 5000)
	{
		printf("%.1f|", vet[i]);
		i++;
	}
}

