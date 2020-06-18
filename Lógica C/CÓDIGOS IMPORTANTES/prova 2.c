#include <stdio.h>
#include "pilha.h"
#include "fila.h"
#define MAX 50

int main(){
	tp_fila pedido;
	inicializa_fila (&pedido);
	tp_fila comida;
	inicializa_fila (&comida);
	int c;
	tp_item e;
	
	for(c=1;c<=MAX;c++){
		printf("%d\n", c);
		if(c<=MAX){
		insere_fila(&pedido, e);
		}else{
		printf("Fila Cheia");
		}
}
	while(!fila_vazia(&pedido)){
		remove_fila(&pedido, e);
		insere_fila(&comida,e);
	}
	while(!fila_vazia(&comida)){
		remove_fila(comida,&e);
	}
				
	
	
	
	return 0;
}
