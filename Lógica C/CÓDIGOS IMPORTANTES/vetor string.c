#include <stdio.h>

int main()
{
	char v[5][10] = {"aviao", "gato", "papagaio", "nadegas", "violencia"};
	int i;
	for(i = 0; i < 5; i++){
		printf("%s\n", v[i]);
	}
	return 0;
}
