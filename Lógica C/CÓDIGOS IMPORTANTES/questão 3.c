#include <stdio.h>
#define MAX 100
int main(){

typedef int
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
printf("%d ",e);
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




nt empilha_pilhas(tp_pilha *p1, tp_pilha *p2){
tp_item e;
tp_pilha paux;
inicializa_pilha(&paux);
if ( altura_pilha(p1)+altura_pilha(p2) > MAX) return 0;
while (!pilha_vazia(p2)) {
pop(p2, &e);
push(&paux, e);
}
while (!pilha_vazia(&paux)){
pop(&paux, &e);
push(p1, e);
}
return 1;
}
#include "pilha.h"
int main() {
tp_pilha pilha1, pilha2;
inicializa_pilha(&pilha1);
inicializa_pilha(&pilha2);
push(&pilha1, 1);
push(&pilha1, 2);
push(&pilha1, 3);
push(&pilha2, 4);
push(&pilha2, 5);
push(&pilha2, 6);
imprime_pilha(pilha1);
imprime_pilha(pilha2);
empilha_pilha(&pilha1, &pilha2);
imprime_pilha(pilha1);
imprime_pilha(pilha2);
return 0;
}
