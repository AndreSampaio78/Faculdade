#include<stdio.h>


int main(){
	int n,i,f=1;
	printf("Digite o numero que quer o fatorial");
	scanf("%d",&n);
	for(i=n;i>=1;i--){
		f=f*1;
	}
	printf(" o fatorial de %d e %d", n, f);
	return 0;
}
