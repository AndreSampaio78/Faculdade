#include<stdio.h>
#include<math.h>
int main(){
	int n, q, c;
	c=1;
	while(c<=5){
		printf(" Digite um numero inteiro:");
		scanf("%d", &n);
		q=pow(n,2);
		printf(" O quadrado de %d e %d", n, q);
		c++;// igual a c=c+1
		
	}
	
	
	
	
	return 0;
}
