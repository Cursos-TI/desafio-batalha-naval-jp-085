#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    int tabuleiro[10][10];
    // 1. Inicializar o tabuleiro com 0 (água)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    int navioHorizontal[3];
    int navioVertical[3];
    // 2. Inicializar vetores dos navios (valor 3)
    for (int i = 0; i < 3; i++) {
        navioHorizontal[i] = 3;
        navioVertical[i] = 3;
    }

    // 3. Definir coordenadas dos navios

    int linhaH = 8;   // linha do navio horizontal
    int colH   = 5;   // coluna inicial do horizontal

    int linhaV = 2;   // linha inicial do vertical
    int colV   = 4;   // coluna do vertical

    // Posicionar Navio Horizontal (→)
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaH][colH + i] = navioHorizontal[i];
    }

   
    // Posicionar Navio Vertical (↓) 
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaV + i][colV] = navioVertical[i];
    }

    // 6. Exibir o tabuleiro no console
    printf("\n===== TABULEIRO BATALHA NAVAL =====\n\n");
    printf("\n  A B C D E F G H I J\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", i + 1 );
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.
    int tabuleiro[10][10];

    // 1. Inicializar o tabuleiro com 0 (água)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // ================================================================
    // 2 NAVIOS NORMAIS (HORIZONTAL E VERTICAL)
    // ================================================================

    int navio1H[3] = {3, 3, 3};  // navio horizontal
    int navio2V[3] = {3, 3, 3};  // navio vertical

    // Coordenadas escolhidas
    int linhaH = 8;   // linha do navio horizontal
    int colH   = 5;   // coluna inicial do horizontal

    int linhaV = 2;   // linha inicial do vertical
    int colV   = 4;   // coluna do vertical

    // Posicionar Navio Horizontal (→)
    for (int i = 0; i < 3; i++) {
        if (tabuleiro[linhaH][colH + i] == 0)
            tabuleiro[linhaH][colH + i] = navio1H[i];
    }

    // Posicionar Navio Vertical (↓)
    for (int i = 0; i < 3; i++) {
        if (tabuleiro[linhaV + i][colV] == 0)
            tabuleiro[linhaV + i][colV] = navio2V[i];
    }


    // 2 NAVIOS DIAGONAIS

    int navioDiag1[3] = {3, 3, 3};  // diagonal crescente (↘)
    int navioDiag2[3] = {3, 3, 3};  // diagonal decrescente (↙)

    // Coordenadas iniciais escolhidas
    int linhaD1 = 1;   // diagonal 1
    int colD1   = 6;

    int linhaD2 = 6;   // diagonal 2 oposta
    int colD2   = 3;

    // Posicionar Navio Diagonal 1 
    for (int i = 0; i < 3; i++) {
        int l = linhaD1 + i;
        int c = colD1 + i;

        if (tabuleiro[l][c] == 0)
            tabuleiro[l][c] = navioDiag1[i];
    }

    // Posicionar Navio Diagonal 2 oposta
    for (int i = 0; i < 3; i++) {
        int l = linhaD2 + i;
        int c = colD2 - i;

        if (tabuleiro[l][c] == 0)
            tabuleiro[l][c] = navioDiag2[i];
    }


    // EXIBIÇÃO DO TABULEIRO

    printf("\n===== TABULEIRO BATALHA NAVAL =====\n\n");
    printf("    A B C D E F G H I J\n");

    for (int i = 0; i < 10; i++) {
        printf("%2d  ", i + 1);

        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }

        printf("\n");
    }


    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0
    int tabuleiro[10][10];

    // 1. Inicializar o tabuleiro com 0 (água)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // ================================================================
    // 2 NAVIOS NORMAIS (HORIZONTAL E VERTICAL)
    // ================================================================

    int navio1H[3] = {3, 3, 3};
    int navio2V[3] = {3, 3, 3};

    int linhaH = 8;
    int colH   = 5;

    int linhaV = 2;
    int colV   = 4;

    for (int i = 0; i < 3; i++) {
        if (tabuleiro[linhaH][colH + i] == 0)
            tabuleiro[linhaH][colH + i] = navio1H[i];
    }

    for (int i = 0; i < 3; i++) {
        if (tabuleiro[linhaV + i][colV] == 0)
            tabuleiro[linhaV + i][colV] = navio2V[i];
    }

    // ================================================================
    // 2 NAVIOS DIAGONAIS
    // ================================================================

    int navioDiag1[3] = {3, 3, 3};
    int navioDiag2[3] = {3, 3, 3};

    int linhaD1 = 1;
    int colD1   = 6;

    int linhaD2 = 6;
    int colD2   = 3;

    for (int i = 0; i < 3; i++) {
        int l = linhaD1 + i;
        int c = colD1 + i;

        if (tabuleiro[l][c] == 0)
            tabuleiro[l][c] = navioDiag1[i];
    }

    for (int i = 0; i < 3; i++) {
        int l = linhaD2 + i;
        int c = colD2 - i;

        if (tabuleiro[l][c] == 0)
            tabuleiro[l][c] = navioDiag2[i];
    }

    // ================================================================
    // MATRIZES DE HABILIDADE (5x5)
    // ================================================================

    int cone[5][5];
    int cruz[5][5];
    int oct[5][5];

    // -----------------------------
    // MATRIZ DE CONE (↘ expandindo)
    // -----------------------------
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (j >= 2 - i && j <= 2 + i)
                cone[i][j] = 1;
            else
                cone[i][j] = 0;
        }
    }

    // -----------------------------
    // MATRIZ DE CRUZ
    // -----------------------------
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == 2 || j == 2)
                cruz[i][j] = 1;
            else
                cruz[i][j] = 0;
        }
    }

    // -----------------------------
    // MATRIZ DE OCTAEDRO (losango)
    // -----------------------------
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if ((i - 2) + (j - 2) <= 2)
                oct[i][j] = 1;
            else
                oct[i][j] = 0;
        }
    }

    // ================================================================
    // SOBREPOR HABILIDADES NO TABULEIRO
    // ================================================================

    int origemConeL = 4, origemConeC = 4;
    int origemCruzL = 1, origemCruzC = 1;
    int origemOctL  = 7, origemOctC  = 7;

    // Cone
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {

            if (cone[i][j] == 1) {
                int l = origemConeL - 2 + i;
                int c = origemConeC - 2 + j;

                if (l >= 0 && l < 10 && c >= 0 && c < 10) {
                    if (tabuleiro[l][c] == 0)
                        tabuleiro[l][c] = 5;
                }
            }
        }
    }

    // Cruz
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {

            if (cruz[i][j] == 1) {
                int l = origemCruzL - 2 + i;
                int c = origemCruzC - 2 + j;

                if (l >= 0 && l < 10 && c >= 0 && c < 10) {
                    if (tabuleiro[l][c] == 0)
                        tabuleiro[l][c] = 5;
                }
            }
        }
    }

    // Octaedro
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {

            if (oct[i][j] == 1) {
                int l = origemOctL - 2 + i;
                int c = origemOctC - 2 + j;

                if (l >= 0 && l < 10 && c >= 0 && c < 10) {
                    if (tabuleiro[l][c] == 0)
                        tabuleiro[l][c] = 5;
                }
            }
        }
    }


    // ================================================================
    // EXIBIÇÃO DO TABULEIRO FINAL
    // ================================================================

    printf("\n===== TABULEIRO BATALHA NAVAL =====\n\n");
    printf("    A B C D E F G H I J\n");

    for (int i = 0; i < 10; i++) {
        printf("%2d  ", i + 1);

        for (int j = 0; j < 10; j++) {

            if (tabuleiro[i][j] == 0)      printf("0 ");
            else if (tabuleiro[i][j] == 3) printf("3 ");
            else if (tabuleiro[i][j] == 5) printf("5 ");
        }

        printf("\n");
    }


    return 0;
}
