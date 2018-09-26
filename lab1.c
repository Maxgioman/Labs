#include <stdio.h>

#include <math.h>



int main (void)

{
    
	
float a1, b1, c1, d1, e1;
    
	
double a2, b2, c2, d2, e2;

    
	
printf("Enter two 'float' numbers\n");
    
	
scanf("%f %f",&a1, &b1);
    

c1=pow(a1+b1,3);
    

d1=pow(a1,3) + 3*a1*a1*b1;
    

e1=3*a1*b1*b1 + pow(b1,3);
    

printf("Float out :%f\n",(c1 - d1)/e1 );

    

printf("Enter two 'double' numbers\n");
    

scanf("%lf %lf",&a2, &b2);
    

c2=pow(a2+b2,3);
    

d2=pow(a2,3) + 3*a2*a2*b2;
    

e2=3*a2*b2*b2 + pow(b2,3);
    

printf("Double out :%lf\n",(c2 - d2)/e2);

    

return 0;

}
