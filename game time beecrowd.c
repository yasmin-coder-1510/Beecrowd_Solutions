#include <stdio.h>

int main() {
  int a,b;
  scanf("%d %d",&a,&b);

   int p = b-a;
  int q =(b+24)-a;

  if (b>a)
  {
    printf("O JOGO DUROU %d HORA(S)\n",p);
  }
  else
  {
     printf("O JOGO DUROU %d HORA(S)\n",q);
  }

    return 0;
}
