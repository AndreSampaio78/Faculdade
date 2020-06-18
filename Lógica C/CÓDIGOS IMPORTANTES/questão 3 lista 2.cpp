#include <stdio.h> 
#include "fila.h" 
#include "pilha.h" 
int main(){ 
tp_fila f; 
inicializa_fila(&f); 
int i, n; 
tp_item e; 
for (i=1;i<=15;i++){ 
printf("Digite um numero"); 
scanf("%d", &n); 
if (n%2==0) { 
if (!insere_fila(&f,n)) { 
remove_fila(&f, n);
 insere_fila(&f,n);
  } 
  } else { 
  if (!remove_fila(&f,&e)) 
  printf("Fila vazia");
   } 
   } 
   return 0; 
   }
