
#include <stdio.h>

int main() {
 int M,N,fac1=1,fac2=1, sum=0;

 scanf("%d %d",&M,&N);

 if(M==0)
 {
     printf("%d\n",fac1);
 }

 for(int i=1;i<=M;i++)
 {
     fac1=fac1*i;
 }

  if(N==0)
 {
     printf("%d\n",fac2);
 }

 for(int i=1;i<=N;i++)
 {
     fac2=fac2*i;
 }

 sum=fac1+fac2;

 printf("%ld\n",sum);

    return 0;
}
