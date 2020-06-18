#include <stdio.h>
#define MAX 100
int main(){

typedef char
tp_item;

typedef struct {
int topo;
tp_item item[MAX];
} tp_pilha;

void inicializa_pilha(tp_pilha *p){
p->topo = -1;
}

int pilha_vazia(tp_pilha *p){
if (p->topo == -1) return 1;
return 0;
}

int pilha_cheia(tp_pilha *p){
if (p->topo == MAX-1) {
return 1;
} else {
return 0;
}
}

int push(tp_pilha *p, tp_item e){
if (pilha_cheia(p)==1) return 0;
p->topo++;
p->item[p->topo]=e;
return 1;
}

int pop(tp_pilha *p, tp_item *e){
if (pilha_vazia(p)) return 0;
*e=p->item[p->topo];
p->topo--;
return 1;
}

int top(tp_pilha *p, tp_item *e){
if (pilha_vazia(p)) return 0;
*e=p->item[p->topo];
return 1;
}
void imprime_pilha(tp_pilha p){
tp_item e;
printf("\n");
while (!pilha_vazia(&p)){
pop(&p, &e);
printf("%c ",e);
}
}
int altura_pilha(tp_pilha *p){
return p->topo+1;
}

void retira_impares(tp_pilha *p){
tp_item e;
tp_pilha paux;
inicializa_pilha(&paux);
while (!pilha_vazia(p)) {
pop(p,&e);
if (e%2==0) push(&paux,e);
}
while (!pilha_vazia(&paux)){
pop(&paux, &e);
push(p,e);
}
}



#include "pilha.h"
int main(){
tp_item e;
int i, tam;
char expressao[1001];
tp_pilha paux;
inicializa_pilha(&paux);
gets(expressao);
tam=strlen(expressao);
for (i=0;i<tam;i++){
if (expressao[i]== '(') push(&paux, expressao[i]);
if (expressao[i]== ')') {
if ( pop(&paux,&e) == 0 ) {
printf("Incorrect\n");
exit(0);
}
}
}
if (pilha_vazia(&paux)) printf("Correct\n");
else printf("Incorrect\n");
return 0;
