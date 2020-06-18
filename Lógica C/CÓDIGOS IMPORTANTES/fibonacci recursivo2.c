#include <stdio.h>
long fibonacci(long n){
if ( (n==1) || (n==2) ) //solução trivial
return 1;
else //solução geral
return fibonacci(n-1)+ fibonacci(n-2);
}

int main(){
long n;
printf("Digite o termo desejado:");
scanf("%d",&n);
printf("O elemento presente no termo %d e: %d ",n,fibonacci(n));
return 0;
}
