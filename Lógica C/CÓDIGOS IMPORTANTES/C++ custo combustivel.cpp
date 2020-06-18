#include<stdio.h>
#include<locale.h>


int main(){
	
	float dist,preco,litros,custo;
	setlocale(LC_ALL,"portuguese");
	printf("Informe a distancia até a fazenda");
	scanf("%f",&dist);
	printf("Informe o preço da gasolina");
	scanf("%f",&preco);
	litros=dist/12;
	custo=litros*preco;
	printf("Você precisará de %f litros a um custo de %f reais", litros, custo);
		
return 0;
}
	
