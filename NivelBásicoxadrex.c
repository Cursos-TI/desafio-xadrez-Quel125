//Professor:Sergio Cardoso
//Aluna:Queren Hapuque

#include <stdio.h>

int main (){

int torre = 0, bispo = 1, rainha = 0;

while (torre < 5) {

printf("Direita\n"); torre++ ;

}
do{ 

printf("Cima, Direita\n"); bispo++;

}while(bispo <6);

for(rainha = 0; rainha <8; rainha++){

printf("Esquerda\n");
}

return 0;

}