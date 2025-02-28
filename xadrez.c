#include <stdio.h>
 
int main() {
  
   
   int Tsteps = 0;
   char TowerHeading[10];
   char BeshophoVertical[10], BeshophoHorizontal[10];
   char QueenHeading[10];
   
     // Movimento da Torre
    printf("Informe a quantidade de casas da torre:\n");
    scanf("%d",&Tsteps);
    printf("\n\n");

    //Direção da torre
    printf("Escolha a direção da Torre (Esquerda, Direita, Cima, Baixo):\n");
    scanf("%s", TowerHeading);
    
    
    printf("\nMovimento da Torre:\n");
    printf("\n\n");
    for(int i = 0; i< Tsteps ; i++)
    {
        
        printf("%s\n", TowerHeading);

    }


    // Movimento do bispo
    int Bsteps = 0;
    
    printf("Informe a quantidade de casas do Bispo:\n");
    scanf("%d", &Bsteps);
    printf("Escolha a direção vertical do Bispo (Cima/Baixo):\n");
    scanf("%s", BeshophoVertical);
    printf("Escolha a direção horizontal do Bispo (Esquerda/Direita):\n");
    scanf("%s", BeshophoHorizontal);
    
    printf("\nMovimento do Bispo:\n");
    int j = 0;
    while (j < Bsteps) {
        printf("%s, %s\n", BeshophoVertical, BeshophoHorizontal);
        j++;
    }


     // Movimento da Rainha

    int Qsteps = 0;
    printf("Informe a quantidade de casas da Rainha:\n");
    scanf("%d",&Qsteps);
    printf("\n\n");

    printf("Escolha a direção da Rainha (Esquerda, Direita, Cima, Baixo):\n");
    scanf("%s", QueenHeading);
 

    printf("\nMovimento da Rainha:\n");
    int k = 0;
    do {
        printf("%s\n", QueenHeading);
        k++;
    } while (k < Qsteps);




    
     // Movimento do Cavalo
     printf("\nMovimento do Cavalo:\n");
    
     
     for (int L = 0; L < 1; L++) {   // para o L de zero a 1 , ele incrementa
         while (L < 2) {   // enquanto o L for menor que 2 , ele printa para baixo, entao duas vezes,
             printf("Baixo\n");
             L++; // interropendo o loop Infinto
         }
           
         printf("Esquerda\n"); // com o for é de zero a 1 , ele printa esquerda somente uma vez
     }

   

    return 0;


}