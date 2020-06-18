#include<stdio.h>
#include<stdlib.h>


int main(){
	
	FILE*arquivo;
	arquivo=fopen ("Mercado.txt", "w");
	
	fprintf (arquivo," Materiais de Limpeza=\n Carnes=\n Lanches=\n\n");

	fclose(arquivo);
	
	
	
	return 0;
}
