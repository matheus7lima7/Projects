#include <stdio.h>

void calc_area(float a){
        printf("o valor em metros quadrados de sua área será:  \n\ %f", (2*3.14)*(a*a));
    }
int main()
{
    float a;
    printf("digite o valor do raio da circunferência:   ");
    scanf("%f", &a);
    calc_area(a);
}
