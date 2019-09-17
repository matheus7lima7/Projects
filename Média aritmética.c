#include <stdio.h>

int main(void) {
  //média aritmética
  int n1, n2, n3, m;
  printf("Informe a primeira nota:  ");
  scanf("%d", &n1);
  printf("Informe a segunda nota:  ");
  scanf("%d", &n2);
  printf("Informe a terceira nota:  ");
  scanf("%d", &n3);
  m=(n1+n2+n3)/3;
  printf("A Média final é:  %d", m);


}