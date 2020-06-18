#include<stdio.h>
#include<stdlib.h>

int main(){
	char nomearq[50], mensagem[50];
	FILE *arq;
	printf(" Digite o nome do arquivo: ");
	gets(nomearq);
	arq=fopen(nomearq, "w");
	if(arq==NULL){
		printf(" Nao foi possivel abrir o arquivo. ");}
		else {
			printf(" Digite a mensagem 1 para gravar no arquivo: ");
			gets(mensagem);
			fprintf(arq, mensagem);
			fprintf( arq, "\n");
			printf(" Digite a mensagem 2 para gravar no arquivo: ");
			gets(mensagem);
			fputs(mensagem, arq);}
			fclose(arq);
	
	return 0;
}
