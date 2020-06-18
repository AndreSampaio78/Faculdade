#include<stdio.h>
#include<stdlib.h>

int main(){
float l1,l2,l3;
printf (" Digite os 3 lados do triangulo\n");
scanf("%f%f%f",&l1,&l2,&l3);	
if ((l1>=l2+l3)||(l2>=l1+l3)||(l3>=l1+l2)){
	printf(" Não forma um triangulo");
} else {
	printf(" Forma um triangulo");
	if ( (l1==l2)&&(l2==l3)){
		printf(" o triangulo e EQULATERO");
	}else {
		if((l1==l2)||(l2==l3)||(l1==l3)){
		printf(" O triangulo e ISOSCELES");
	} else {
		printf(" O triangulo e ESCALENO");
	}
		}
	}
//fim do else
	
	return 0;
}//fim main

