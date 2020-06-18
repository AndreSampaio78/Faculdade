#include <stdio.h>

int fatorial(int n){
	if(n==0){
	
	return 1;
	}else{
	
	return n*fatorial(n-1);
}
}

int main(){
	int n;
	Printf("Digite um número inteiro");
	scanf ("%d", &n);
	printf("O fatorial de %d é: %d",n, fatorial(n) );
	
	
	return 0;
	
	
}
