#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    //menu
    int menuprincipal;
	
    printf(" MENU PRINCIPAL\n 1 - VISUALIZAR VIAGENS \n 2 - MONTAR VIAGENS \n 3 - ESCOLHER ROTEIROS \n 4 - SAIR\n");
    scanf("%d", &menuprincipal);
    switch (menuprincipal) {
    case 1:
        system("cls");
        printf("VISUALIZAR VIAGENS\n");
        	printf(" a-Praias\n b-Religioso\n c-Historico\n d-Gastronomico\n");
        break;
    case 2:
        system("cls");
        printf("MONTAR VIAGENS\n");
        break;
    case 3:
        system("cls");
        printf("ESCOLHER ROTEIROS\n");
        break;
    case 4:
        system("cls");
        printf("Voce pediu para sair\n");
        break;
        
    default:
        printf("Voce deve escolher uma opcao valida\n");
        printf("Precione qualquer tecla para voltar ao menu\n");
        
        
        system("pause");
    }
    return 0;
} 
