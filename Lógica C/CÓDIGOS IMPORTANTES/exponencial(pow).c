#include<stdio.h>
#include<math.h>
int main(){
int n, fn;
for(n=0;;n++){
	fn=2*pow(n,3)+pow(n,2)-n;
		if (fn>=140){
		printf("n e:%d", n);
		break;	
		} 
}
	
	
	
	
	return 0;
}
