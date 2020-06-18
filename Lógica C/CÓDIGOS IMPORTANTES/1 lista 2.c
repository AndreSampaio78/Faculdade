#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	int n1,n2,n3;
	setlocale(LC_ALL, "portuguese");
	printf(" Digite os n1:\n");
	scanf("%d\n", &n1);
	printf(" Digite os n2:\n");
	scanf("%d\n", &n2);
	printf(" Digite os n3:\n");
	scanf("%d\n", &n3);
	if((n1>=n2)&&(n1>=n3)){
		printf(" O maior número é: %d ",n1 );
	} else{
	}
	if((n2>=n3)&&(n2>=n1)){
			printf(" O maior número é: %d ",n2 );	
		}else {
		}
	if((n3>=n1)&&(n3>=n2)){
		printf(" O maior número é: %d ",n3 );
	}	else{
		
	}		
		
	system("pause");
	return 0;
}
