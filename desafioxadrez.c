#include <stdio.h>

//função recursividade para imprimir os movimentos da TORRE
void movertorre (int casas) {
    if (casas > 0) {
        printf("DIREITA\n"); 
        movertorre (casas - 1);
    }
}

//função recursividade para imprimir os movimentos do BISPO
void moverbispo (int casas) {
    if (casas > 0) {
        printf("DIREITA/PARA CIMA\n");
        moverbispo (casas - 1);
    }
}

//função recursividade para imprimir os movimentos da RAINHA
void moverrainha (int casas) {
    if (casas > 0) {
        printf("ESQUERDA\n");
        moverrainha (casas - 1);
    }
}

//função recursividade para imprimir os movimentos do CAVALO com a utilização de um loop aninhado com a estrutura de repetição for
void movercavalo (int casas) {
    if (casas > 0)
        {
        for(int cavalo = 1; cavalo <= 2; cavalo++)
        {
            printf("CIMA\n");
        }
        printf("DIREITA\n");
        movercavalo (casas - 1);
     }
}

//função principal
int main () {

    //declaração das variavéis do tipo CHAR (array/string) para o nome das peças que serão movimentas
    char torre [10] = "TORRE", rainha [10] = "RAINHA", bispo [10] = "BISPO", cavalo [10] = "CAVALO";

    
    printf ("Movimentos da %s\n", torre);
    movertorre (5); //Comando para rodar o procedimento "movertorre" 5x  
    printf("\n");
    
    printf ("Movimentos do %s\n", bispo);
    moverbispo (5); //Comando para rodar o procedimento "moverbispo" 5x
    printf("\n");

    printf ("Movimentos da %s\n", rainha);   
    moverrainha (8); //Comando para rodar o procedimento "moverrainha" 8x
    printf("\n");

    printf ("Movimentos do %s\n", cavalo);   
    movercavalo (1); //Comando para rodar o procedimento "movercavalo" 1x
    printf("\n");

        

return 0;
}