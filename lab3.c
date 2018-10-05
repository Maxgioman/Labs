#include <stdio.h>
#include <math.h>

int main()
{

    double x, y, SN=0, SE=0, a = 1;
    int n=1;

    for (x=0.1; x<=1; x+=0.1)
        {

        y=2*(cos(x)*cos(x)-1);

            for(n=1;n<=15;n++)
            {
                SN+=a;
                a *= ((-4)*x*x)/(2*n+2);
            }

            do
             {
                a *= ((-4)*x*x)/(2*n+2);
                SE+=a;
            }
            while (fabs(a)>0.0001);

        printf("y = %f\nSN = %f\nSE = %f\n",y, SN, SE );
        }

}
