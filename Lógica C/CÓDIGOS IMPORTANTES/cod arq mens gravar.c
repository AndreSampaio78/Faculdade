#include<stdio.h>
#include<stdlib.h>

int main(){
	char nomearq[50], mensagem[50];
	FILE *arq;
	printf(" Digite o nome do arquivo: ");
	gets(nomearq);
	arq=fopen(nomearq, "a");
	if(!arq){
		printf(" Nao foi possivel abrir o arquivo. ");}
		else {
			printf(" Digite a mensagem para gravar no arquivo: ");
			gets(mensagem);
			fprintf(arq, mensagem);
			fprintf( arq, "\n");}
			fclose(arq);
	
	return 0;
}
