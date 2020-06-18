#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include<time.h>//necessário p/ função time()
void gotoxy( int coluna, int linha){

COORD coord;
coord.X=coluna;
coord.Y=linha;
SetConsoleCursorPosition( GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main(void)
{
  int x,y,i;
  
   printf("Digite a primeira coordenada:\n\n");
   scanf("%d",&x);
  printf("Digite a segunda coordenada:\n\n");
   scanf("%d",&y);
   
   printf("x= %d y= %d\n", x,y);
   
  srand(time(NULL));
  gotoxy(x, y);
  i= rand() % 10;
  printf("%d", i);
  
  
  getch();
  return 0;
}



