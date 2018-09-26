# Labs
GitHub for my CS classes

#include <stdio.h>
#include <math.h>

long unsigned int factorial (int k)
{
    return (k<2)?1:k*factorial(k-1);
}

int main()
{
   double a, n, s=0;

   n=1;
   while (n<=10)
    {
        a=(factorial(n))/pow(n,sqrt(n));
        n++;
        s+=a;
    }

   printf("The sum is %f\n", s);
 }
