
#include <stdio.h>


int main() {
    // Movimento da Torre 
    printf("Movimento da Torre:\n");
    
    for(int i = 0; i < 5; i++) {
        printf("Direita\n");
    }
    
    // Movimento do Bispo 
    printf("\nMovimento do Bispo:\n");
    
    int j = 0;
    while(j < 2) {
        printf("Cima\n");
        printf("Direita\n");
        j++;
    }
    
    // Movimento do Cavalo (novo movimento em L)
    printf("\nMovimento do Cavalo:\n");
    
    // Primeira parte do L: 2 movimentos para baixo
    for(int k = 0; k < 2; k++) {
        printf("Baixo\n");
    }
    
    // Segunda parte do L: 1 movimento para a esquerda
    int m = 0;
    do {
        printf("Esquerda\n");
        m++;
    } while(m < 1);
    
    // Movimento da rainha
printf("Movimento da rainha\n");
   
   int rainha = 0;
    for(rainha = 0; rainha <8; rainha++){

printf("Esquerda\n");
}
    return 0;
}
