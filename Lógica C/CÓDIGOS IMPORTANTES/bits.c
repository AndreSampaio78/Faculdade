#include<stdio.h>
#include<locale.h>


int main(){
	int kby, mby, m;
	printf("Digite quantos Megabytes tem seu computador");
	scanf("%d", &mby);
	kby= 1024 * 8;
	m= mby*(1024 * kby);
	printf(" Seu computador tem %d bits", m);
	return 0;
	
}
