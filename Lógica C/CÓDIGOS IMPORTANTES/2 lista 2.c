#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	int c;
	printf("Digite o código do produto desejado:\n");
	scanf("%d",&c);
	switch(c){
		case 1: printf("Enlatado");
		break;
		case 2: printf("Higiene");
		break;
		case 3:	printf("limpeza");
		break;
		
		default: printf("Código Invalido");
	}
	
	
	return 0;
}
