int main() {
char diamante[1001], e;
int qtde, i, j, tam, qtdiam;
tp_pilha pilha;
scanf("%d", &qtde);
for (i=1; i<=qtde; i++){
scanf(" %[^\n]s", diamante);
tam=strlen(diamante);
qtdiam=0;
inicializa_pilha(&pilha);
for (j=0;j<tam;j++){
switch (diamante[j]) {
case '<': push(&pilha, diamante[j]);
break;
case '>': if ( pop(&pilha, &e) ) {
qtdiam++;
}
break;
} // fim do SWITCH
} // fim do FOR interno
printf("%d\n", qtdiam);
} // fim do FOR externo

return 0;
}
