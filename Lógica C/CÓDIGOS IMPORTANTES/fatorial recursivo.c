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
	Printf("Digite um n�mero inteiro");
	scanf ("%d", &n);
	printf("O fatorial de %d �: %d",n, fatorial(n) );
	
	
	return 0;
	
	
}
