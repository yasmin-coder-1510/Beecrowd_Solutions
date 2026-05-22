#include <stdio.h>

int main() {

    int X,Y;
    double price;
    scanf("%d %d",&X,&Y);
    switch(X)
    {
       case 1 :
       {
        price = 4.00 ;
        printf("Total: R$ %.2lf\n",price*Y);
        break;
       }
      case 2 :
       {
        price = 4.50 ;
        printf("Total: R$ %.2lf\n",price*Y);
         break;
       }
       case 3 :
       {
        price = 5.00 ;
        printf("Total: R$ %.2lf\n",price*Y);
         break;
       }

      case 4 :
       {
        price = 2.00 ;
        printf("Total: R$ %.2lf\n",price*Y);
         break;
       }

       default :
       {
        price = 1.50 ;
        printf("Total: R$ %.2lf\n",price*Y);
        break;
       }
    }

    return 0;
}
