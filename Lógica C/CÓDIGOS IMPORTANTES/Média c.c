#include<stdio.h>
#include<locale.h>

int main(){
	float n1, n2, n3, media;
	setlocale(LC_ALL, "portuguese");
	printf(" Digite as tr�s notas ");
	scanf("%f %f %f", &n1, &n2, &n3);
	media=(n1+n2+n3)/3;
	if ( media >= 6){
		printf(" Aprovado com M�dia %f ", media);	
	} else {
		printf(" Reprovado com M�dia %f ", media);
	}
	
	return 0;
}
