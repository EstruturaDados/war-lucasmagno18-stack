#include <stdio.h>
#include <string.h>

struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

int main() {
    struct Territorio territorios[5];
    
    printf("=== SISTEMA DE CADASTRO DE TERRITORIOS ===\n\n");
    
    for (int i = 0; i < 5; i++) {
        printf("--- Cadastro do Territorio %d ---\n", i + 1);
        
        // Limpa o buffer do teclado antes de ler strings
        while (getchar() != '\n');
        
        printf("Digite o nome do territorio: ");
        fgets(territorios[i].nome, 30, stdin);
        territorios[i].nome[strcspn(territorios[i].nome, "\n")] = 0; // Remove \n
        
        printf("Digite a cor do exercito: ");
        fgets(territorios[i].cor, 10, stdin);
        territorios[i].cor[strcspn(territorios[i].cor, "\n")] = 0; // Remove \n
        
        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);
        
        printf("\n");
    }
    
    printf("\n=== DADOS DOS TERRITORIOS CADASTRADOS ===\n\n");
    
    for (int i = 0; i < 5; i++) {
        printf("Territorio %d:\n", i + 1);
        printf("  Nome: %s\n", territorios[i].nome);
        printf("  Cor do exercito: %s\n", territorios[i].cor);
        printf("  Tropas: %d\n", territorios[i].tropas);
        printf("\n");
    }
    
    return 0;
}