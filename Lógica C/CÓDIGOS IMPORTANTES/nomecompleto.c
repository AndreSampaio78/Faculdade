#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	
	char nomecompleto[15], sobrenome[15];
	int r;
	
	printf(" Digite o seu nome completo:\n");
	gets(nomecompleto);
		printf(" %s ", nomecompleto);
	printf(" \nDigite o sobrenome:\n");
	gets(sobrenome);	
	fflush(stdin);
	r=strncmp( nomecompleto, sobrenome,15 );
	if(r==0){
		printf(" faz parte do nome digitado.\n  ");
		
	} else {
		printf(" nao faz parte do nome. \n");
		strcat( nomecompleto, " ");
		strcat( nomecompleto, sobrenome);
		printf("%s", nomecompleto);	
	}

	return 0;
}
