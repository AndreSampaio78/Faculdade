#include <stdio.h>

int maior(int vetor[6], int pos) {
if (pos==0) return vetor[0];
else {
int val=maior(vetor, pos-1);
if (val>vetor[pos]) return val;
else return vetor[pos];
}
}

int main() {
int vetor[6]= {44,28,12,63,3,57};
printf("\n vet: %d",maior(vetor,5));


return 0;
}

