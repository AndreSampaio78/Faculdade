#include<stdio.h>
#include<locale.h>

int main (){
int n1, n2, n3;
setlocale (LC_ALL, "portuguese");//biblioteca 
printf("Digite o primeiro valor: \n");//numeros aleatorios
scanf ("\n%d",&n1);
printf("Digite o segundo valor: \n");//numeros aleat�rios
scanf ("\n%d",&n2);	
printf("Digite o terceiro valor: \n");//n�meros aleat�rios
scanf ("\n%d",&n3);
if ((n1>=n2)&&(n1>=n3)){ 
	printf("O maior n�mero � %d: ", n1);
}
else
{if((n2>=n1)&&(n2>=n3)){
	printf("O maior n�mero � %d: ", n2);
}
if ((n3>=n1)&&(n3>=n2)){
	printf("O maior n�mero � %d: ", n3);
}
}


	return 0;
}
