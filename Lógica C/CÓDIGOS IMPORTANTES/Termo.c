#include<stdio.h>


int main(){
	int t,i,a=1, b=0, fib;
	printf (" Digite o t");
	scanf("%d", &t);
	for( i=0;i<=t;i++){
		fib=a+b;
		a=b;
		b=fib;
		printf("%d", fib);
	}
	return 0;
}
