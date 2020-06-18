#include<stdio.h>
#include<locale.h>

int main (){
int n1, n2, n3;
setlocale (LC_ALL, "portuguese");
printf("Digite o primeiro valor: ");
scanf ("%d",&n1);
printf("Digite o segundo valor: ");
scanf ("%d",&n2);	
printf("Digite o terceiro valor: ");
scanf ("%d",&n3);
if ((n1>=n2)&&(n1>=n3)){
	printf("O maior número é %d: ", n1);
}
if((n2>=n1)&&(n2>=n3)){
	printf("O maior número é %d: ", n2);
}
if ((n3>=n1)&&(n3>=n2)){
	printf("O maior número é %d: ", n3);
}

	return 0;
}
