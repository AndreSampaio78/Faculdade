#include<stdio.h>
#include<locale.h>


int main(){
	
	float dist,preco,litros,custo;
	setlocale(LC_ALL,"portuguese");
	printf("Informe a distancia at� a fazenda");
	scanf("%f",&dist);
	printf("Informe o pre�o da gasolina");
	scanf("%f",&preco);
	litros=dist/12;
	custo=litros*preco;
	printf("Voc� precisar� de %f litros a um custo de %f reais", litros, custo);
		
return 0;
}
	
