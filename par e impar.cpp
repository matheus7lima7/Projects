#include <stdio.h>

int main(){
	int n, resto;
	printf("Digite um Numero:     ");
	scanf("%d", &n);
	
	resto= n%2;
	if (resto==0){
		printf("Numero Par");
		
	}
	else {
		printf("Numero impar");
	}
}
