#include <stdio.h>
#include "pilha.h"
#include "fila.h"

void organiza_fila(tp fila *f){
	tp_item e;
	tp_fila final;
	inicializa_fila(&final);
	int idade=imprime_fila(f);
	
	while(idade>=60){
		remove_fila(&f,&e);
		insere_fila(&final,e);
		}
	while(!fila_vazia(f)){
		remove_fila(&f,&e);
		insere_fila(&final,e);
	}
	}
	
	
	


int main(){
	tp_fila f;
	inicializa_fila(&f);
	
	insere_fila(&f,30);
	insere_fila(&f,32);
	insere_fila(&f,79);
	insere_fila(&f,28);
	insere_fila(&f,65);
	insere_fila(&f,45);
	insere_fila(&f,86);
	insere_fila(&f,50);
	imprime_fila(f);
	organiza_fila(&f);
	imprime_fila(final);
	return 0;
}
