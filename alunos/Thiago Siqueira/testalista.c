#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include "misc.h"

int main() {
	setlocale(LC_ALL, "Portuguese");
    int escolha;
    int posicao;
    
    printf("Escolha a Opera��o Desejada:\n1 - Gerar Lista\n2 - Buscar\n");
    scanf("%d", &escolha);
    
    if(escolha == 1)
        geralista(100);
    else if(escolha == 2)
    {
        printf("Digite a Posi��o da Lista a ser Buscada:\n");
        scanf("%d", &posicao);
        
        char *numero = buscar(posicao);
        
        printf("O n� Presente na Posi��o %d %s %s", posicao, "�:", numero);
    }
        	
	return 0;
}
