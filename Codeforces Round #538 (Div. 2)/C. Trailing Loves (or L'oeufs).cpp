#include<bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>  /* atoi */

#define min(x, y) (((x) < (y)) ? (x) : (y))

int main(int argc, char* argv[])
{
   const int base = 11;
   int n,i,j,p,c,noz,k;

   n = 38;  /* 7! = decimal 5040 or 0x13B0  - 1 trailing zero */
   noz = n;
   j = base;
   /* Why do we start from 2 */
   for (i=2; i <= base; i++)
   {
      if (j % i == 0)
      {
         p = 0;  /* What is p? */
         while (j % i== 0)
         {
            p++;
            j /= i;
         }
         c = 0;
         k = n;
         /* What is the maths behind this while loop? */
         while (k/i > 0)
         {
            c += k/i;
            k /= i;
         }
         noz = min(noz, c/p);
      }
   }
   printf("%d! has %d trailing zeros\n", n, noz);

   return 0;
}
