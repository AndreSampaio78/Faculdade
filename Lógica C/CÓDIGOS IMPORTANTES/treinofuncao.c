#include<stdio.h>
#include<stdlib.h>

int main(){
	
	
	int somafuncao ();
	
	int mult=somafuncao ();
	
	prinf(" o resultado final será:%d\n", mult);
	
	return 0;
}

int somafuncao () {
		int n1, n2;
	printf("digite primeiro numero:\n");
	scanf("%d", &n1);
	printf("digite segundo numero:\n");
	scanf("%d", &n2);
	int soma = n1+n2;
	printf("A soma dos numeros digitados e:%d\n", soma);
return soma;

}
