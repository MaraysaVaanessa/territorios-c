#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Territorio { // molde
    char nome [30];
    char cor[10];
    int tropa;

    };

int main()
{
    struct Territorio territorios[5];
    int i; // Variável para contar as voltas do laço

    for(i = 0; i <5; i++){
        printf("Digite o nome do territorio %d: ", i + 1);
        scanf("%s", territorios[i].nome); // O scanf guarda o que o usuario digitar

        printf("Cor do exercito: ");
        scanf("%s", territorios[i].cor);

        printf("Quantidade de tropa: ");
        scanf("%d", &territorios[i].tropa);

    }

    //Saída
    printf("---Lista de Territorios---");
    for(i = 0; i <5; i++){
        printf("\nNome: %s", territorios[i].nome);
        printf("\nCor: %s", territorios[i].cor);
        printf("\nTropas: %d",territorios[i].tropa);
    }


    return 0;
}
