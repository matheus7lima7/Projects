#include <stdio.h>

int main (){
	float h, p, m;
	printf("Digite o seu peso:  ");
	scanf("%f",&p);
	printf("Digite a sua altura:  ");
	scanf("%f", &h);
	m=p/(h*h);
	if (m >= 18.5 && m <= 24.9) {
		printf("%.2f - normal", m);
		
	}
	if(m<18.5) {
		printf("abaixo");
	}
	if (m>24.9){
		printf("sobrepeso");
	}
}
