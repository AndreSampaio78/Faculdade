#include <stdio.h>

int fibonacci (int n){

if ((n==1) || (n==2)) return 1;
else 
return fib(n-1) + fib(n-2);

}

int main(){
	long n;
	
	printf(" Digite o termo desejado:");
	scanf("%d", &n);
	printf("O elemento presente no termo %d é: %d", n, fibonacci(n));
	
	
	
	return 0;
}
