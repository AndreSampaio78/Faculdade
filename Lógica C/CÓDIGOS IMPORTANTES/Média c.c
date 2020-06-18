#include<stdio.h>
#include<locale.h>

int main(){
	float n1, n2, n3, media;
	setlocale(LC_ALL, "portuguese");
	printf(" Digite as três notas ");
	scanf("%f %f %f", &n1, &n2, &n3);
	media=(n1+n2+n3)/3;
	if ( media >= 6){
		printf(" Aprovado com Média %f ", media);	
	} else {
		printf(" Reprovado com Média %f ", media);
	}
	
	return 0;
}
