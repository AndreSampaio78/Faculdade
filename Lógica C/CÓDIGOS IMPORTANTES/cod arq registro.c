#include<stdio.h>
#include<stdlib.h>

int main(){
	char nomearq[50];
	FILE *arq;
	printf(" Digite o nome do arquivo: ");
	gets(nomearq);
	char registro[50];
	arq=fopen(nomearq, "r");
	if(!arq){
		printf(" Nao foi possivel abrir o arquivo. ");}
		else {
			while(fgets(registro, sizeof(registro),arq)!=NULL);
			printf("%s", registro);}
			fclose(arq);
	
	return 0;
}
