#include<stdio.h>
#include<stdlib.h>


int main(){
	
	int ba, vit, tba, tvit, gba, gvit, i;

for (i=0;i<=10;i++){
	printf(" Digite os gols do Bahia: \n");
	scanf("%d", &gba);
	printf(" Digite os gols do Vice: \n");
	scanf("%d", &gvit);
	if( gba > gvit){
		printf("\nTriunfo do Bahia.\n");
	}
	if(gba==gvit){
	printf("\n Jogo empatado \n");
	}
	if (gba<gvit) { 
	printf(" \nTriunfo do Vice\n");
}

}

tba=gba>gvit;
printf("%d", tba);
	return 0;
}
