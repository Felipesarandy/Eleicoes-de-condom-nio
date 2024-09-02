/*
EXEMPLO 7: COMANDO WHILE
Ler o voto de 100 moradores (STOP) para síndico do prédio.
Os cadidatos são:

CRIAR UM MENU DE OPÇÕES:

1: Fulano de Tal
2: Beltrano de Tal
3: Cicrano de Tal

Exiba o resultado da votação em porcentagem(%)
fulano (float) = 100.0 * fulano / total
beltrano       = 100.0 * beltrano / total
cicrano        = 100.0 * cicrano / total
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fulano = 0, beltrano = 0, cicrano = 0;
    int moradores = 0, voto;       // START
    float pfulano, pbeltrano, pcicrano;
    printf("ELEICAO PARA SINDICO DO PREDIO:\n");
    while(moradores < 5) {       // STOP
        printf("MENU\n");
        printf("ESCOLHA 1: FULANO\n");
        printf("ESCOLHA 2: BELTRANO\n");
        printf("ESCOLHA 3: CICRANO\n");
        printf("VOTO DO MORADOR %i: ", moradores + 1);
        scanf("%i", &voto);
        // TRATAMENTO DE ERRO:
        if(voto < 1 || voto > 3)
            printf("ERRO: Escolha novamente.\n");
        else{
            if(voto == 1) fulano = fulano + 1;
            else if (voto == 2) beltrano = beltrano + 1;
            else cicrano = cicrano + 1;
            //moradores = moradores + 1
            moradores += 1;                       // STEP
            pfulano = 100.0 * fulano / moradores;
            pbeltrano = 100.0 * beltrano / moradores;
            pcicrano = 100.0 * cicrano / moradores;
            printf("TOTAL DE VOTOS:\n");
            printf("VOTOS DE FULANO: %i (%.1f %%)\n",
                   fulano, pfulano);
            printf("VOTOS DE BELTRANO: %i (%.1f %%)\n",
                   beltrano, pbeltrano);
            printf("VOTOS DE CICRANO: %i (%.1f %%)\n",
                   cicrano, pcicrano);
        }
    }
    return 0;
}