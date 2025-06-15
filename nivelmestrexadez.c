
#include <stdio.h>

// Função recursiva para o movimento da Torre
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para o movimento do Bispo
void moverBispo(int casas) {
    if (casas <= 0) return;
    printf("Cima\n");
    printf("Direita\n");
    moverBispo(casas - 1);
}

// Função recursiva para o movimento da Rainha
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Baixo\n");
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função para o movimento complexo do Cavalo
void moverCavalo() {
    int i, j;
    
    // Loop externo para controle do movimento em L
    for (i = 0; i < 3; i++) {
        // Primeira parte do L: 2 movimentos para cima
        if (i < 2) {
            printf("Cima\n");
            continue; // Pula para próxima iteração
        }
        
        // Segunda parte do L: 1 movimento para direita
        j = 0;
        while (j < 1) {
            printf("Direita\n");
            j++;
            break; // Sai do loop while após uma execução
        }
    }
}

// Função para movimento do Bispo com loops aninhados
void moverBispoAninhado() {
    int vertical = 2; // Número de movimentos verticais
    int horizontal = 2; // Número de movimentos horizontais
    
    // Loop externo para movimento vertical
    for (int v = 0; v < vertical; v++) {
        printf("Cima\n");
        
        // Loop interno para movimento horizontal
        int h = 0;
        while (h < horizontal) {
            printf("Direita\n");
            h++;
        }
    }
}

int main() {
    printf("Movimento da Torre (recursivo):\n");
    moverTorre(3);
    
    printf("\nMovimento do Bispo (recursivo):\n");
    moverBispo(2);
    
    printf("\nMovimento da Rainha (recursivo):\n");
    moverRainha(2);
    
    printf("\nMovimento do Cavalo (loops complexos):\n");
    moverCavalo();
    
    printf("\nMovimento do Bispo (loops aninhados):\n");
    moverBispoAninhado();
    
    return 0;
}