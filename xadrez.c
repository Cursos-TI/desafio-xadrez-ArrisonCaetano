#include <stdio.h>

// Função de Movimento da Torre e Rainha
void MoveTowerandQueen(int steps, const char* direction) {
    if (steps <= 0) return;

    int cont = 0;
    if (cont < steps) {
        cont++;
        printf("%s\n", direction);
        MoveTowerandQueen(steps - 1, direction);
    }
}

// Função de Movimento do Bispo
void MoveBeshop(int steps, const char* Vdirection, const char* Hdirection) {
    if (steps <= 0) return; 

    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 1; j++) {
            printf("%s, %s\n", Vdirection, Hdirection);
        }
    }

    MoveBeshop(steps - 1, Vdirection, Hdirection);
}

// Função do Cavalo
void MoveKnight(const char* Vdirection, const char* Hdirection) {
   
    for (int i = 0; i < 2; i++) {
        ("%s\n", Vdirection);
        if (i == 1) {
            break; // Interrompe o loop após duas casas
        }
    }

    )
    for (int j = 0; j < 1; j++) { 
        printf("%s\n", Hdirection);
        break; // Interrompe o loop após uma casa
    }
}

int main() {
    int Tsteps = 0, Bsteps = 0, Qsteps = 0;
    char TowerHeading[10], BeshophoVertical[10], BeshophoHorizontal[10], QueenHeading[10];

    printf("=============================================\n");
    printf("    Simulador de Movimentos de Peças de Xadrez\n");
    printf("=============================================\n\n");

    // Movimento da Torre
    printf("Movimento da Torre\n");
    printf("-------------------\n");
    printf("Quantas casas a Torre deve mover? (número inteiro positivo): ");
    scanf("%d", &Tsteps);
    printf("Escolha a direção da Torre (Esquerda, Direita, Cima, Baixo): ");
    scanf("%s", TowerHeading);
    printf("\nMovimento da Torre:\n");
    MoveTowerandQueen(Tsteps, TowerHeading);
    printf("\n");

    // Movimento do Bispo
    printf("Movimento do Bispo\n");
    printf("-------------------\n");
    printf("Quantas casas o Bispo deve mover? (número inteiro positivo): ");
    scanf("%d", &Bsteps);
    printf("Escolha a direção vertical do Bispo (Cima ou Baixo): ");
    scanf("%s", BeshophoVertical);
    printf("Escolha a direção horizontal do Bispo (Esquerda ou Direita): ");
    scanf("%s", BeshophoHorizontal);
    printf("\nMovimento do Bispo:\n");
    MoveBeshop(Bsteps, BeshophoVertical, BeshophoHorizontal);
    printf("\n");

    // Movimento da Rainha
    printf("Movimento da Rainha\n");
    printf("--------------------\n");
    printf("Quantas casas a Rainha deve mover? (número inteiro positivo): ");
    scanf("%d", &Qsteps);
    printf("Escolha a direção da Rainha (Esquerda, Direita, Cima, Baixo): ");
    scanf("%s", QueenHeading);
    printf("\nMovimento da Rainha:\n");
    MoveTowerandQueen(Qsteps, QueenHeading);
    printf("\n");

    // Movimento do Cavalo
    printf("Movimento do Cavalo\n");
    printf("--------------------\n");
    printf("O Cavalo sempre se move em L: duas casas para cima e uma para a direita.\n");
    MoveKnight("Cima", "Direita");

    return 0;
}
