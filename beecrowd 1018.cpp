#include <stdio.h>
 
int main() {
int x, q100, r100, q50, r50, q20, r20, q10, r10, q5, r5, q2, r2, q1;

   scanf("%d", &x);

   q100=x/100;
   r100=x%100;
   q50=r100/50;
   r50=r100%50;
   q20=r50/20;
   r20=r50%20;
   q10=r20/10;
   r10=r20%10;
   q5=r10/5;
   r5=r10%5;
   q2=r5/2;
   r2=r5%2;
   q1=r2;

   printf("%d\n", x);
   printf("%d nota(s) de R$ 100,00\n", q100);
   printf("%d nota(s) de R$ 50,00\n", q50);
   printf("%d nota(s) de R$ 20,00\n", q20);
   printf("%d nota(s) de R$ 10,00\n", q10);
   printf("%d nota(s) de R$ 5,00\n", q5);
   printf("%d nota(s) de R$ 2,00\n", q2);
   printf("%d nota(s) de R$ 1,00\n", q1);
    return 0;
}
