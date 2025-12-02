// Online C++ compiler to run C++ program online
# include <stdio.h>

int main() {
   
    int vetor[16];
    int matriz[4][4];
    int i, j, k = 0;

    // Ler 16 números
    for (i = 0; i < 16; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Transferir para matriz 4x4
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            matriz[i][j] = vetor[k];
            k++;
        }
    }
    
    puts("\nConteudo da matriz quadrada: ");
    
    i = 0;
    do {
        j = 0;
        do {
            printf("%d\t", matriz[i][j]);
            j++;
        } while (j < 4);
        printf("\n");
        i++;
    } while (i < 4);

    return 0;

}