#include <stdio.h>
#define MAX 100

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


int main() {
tp_pilha pilha;
inicializa_pilha(&pilha);
push(&pilha, 1);
push(&pilha, 2);
push(&pilha, 3);
push(&pilha, 4);
push(&pilha, 5);
push(&pilha, 6);
imprime_pilha(pilha);
retira_impares(&pilha);
imprime_pilha(pilha);
return 0;
}




int pilhas_iguais(tp_pilha p1, tp_pilha p2){
tp_item e1, e2;
if(altura_pilha(&p1) != altura_pilha(&p2))
return 0;
while(!pilha_vazia(&p1)){
pop(&p1,&e1);
pop(&p2,&e2);
if(e1 != e2) return 0;
}
return 1;
}
