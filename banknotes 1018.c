#include <stdio.h>

int main() {

    int value, temp,Hundred,Fifty,Twenty,Ten,Five,Two,One;
 scanf("%d",&value);

 temp = value;

 Hundred = value/100;
 value = value%100;
 Fifty = value/50;
 value = value%50;
 Twenty = value/20;
 value = value%20;
 Ten = value/10;
 value = value%10;
 Five = value/5;
 value = value%5;
 Two = value/2;
 value = value%2;
 One = value/1;

 printf("%d\n",temp);
 printf("%d nota(s) de R$ 100,00\n",Hundred);
 printf("%d nota(s) de R$ 50,00\n",Fifty);
 printf("%d nota(s) de R$ 20,00\n",Twenty);
 printf("%d nota(s) de R$ 10,00\n",Ten);
 printf("%d nota(s) de R$ 5,00\n",Five);
 printf("%d nota(s) de R$ 2,00\n",Two);
 printf("%d nota(s) de R$ 1,00\n",One);
    return 0;
}
