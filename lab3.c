#include <stdio.h>
#include <math.h>

int main()
{

    double x, y, SN=0, SE=0, a=1;
    int n=0;

    for (x=0.1; x<=1; x+=0.1)
        {

        y=2*(cos(x)*cos(x)-1);

            for(n=0;n<=15;n++)
            {
                a *= -(2*x*x)/((2*n+1)*(n+1));
                SN+=a;
            }

            n=0;
            a=1;

            while (fabs(a)>0.0001)
            {
                a *= -(2*x*x)/((2*n+1)*(n+1));
                SE+=a;
                n++;
            }

        printf("y  = %f\nSN = %f\nSE = %f\n", y, SN, SE);
        }

}
