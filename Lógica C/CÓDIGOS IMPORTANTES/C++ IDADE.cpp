#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"portugueses");	
int idade,anos,meses,dias, resto;
printf("Informe a sua idade: ");
scanf("%d",&idade);
anos=idade/360;
resto=idade%360;
meses=resto/30;
dias=resto%30;
printf("Você tem %d anos, %d meses e %d dias",anos,meses,dias);


return 0;
}
