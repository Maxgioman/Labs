#include <stdio.h>
#include<cs50.h>
#include<string.h>
#include<math.h>

#define PI 3.1415926535

double triangle_square(double a, double b, double c);
double square(double n,...);

int main(void){
    double square1, square2, square3, square4;
    square1 = triangle_square(3.0, 2.0, 4.0);
    printf("Square of triangle: %f\n", square1);          
    square2 = square(3.0,3.0,3.0,0);
    printf("Square of 1 polygon: %f\n", square2);
    square3 = square(5.0,5.0,5.0,5.0,5.0,0.0);
    printf("Square of 2 polygon: %f\n", square3);
    square4 = square(6.0,6.0,6.0,6.0,6.0,6.0,6.0,6.0,0.0);
    printf("Square of 3 polygon: %f\n", square4);             
}

double triangle_square(double a, double b, double c){
    double p = (a + b + c)/2;
    double square = sqrt(p*(p - a)*(p - b)*(p - c));
    return square;
}

double square(double n,...){
    double *p = &n;
    int count = 0;
    while(*p != 0.0)
    {
        count++;
        p++;
    }
    double ctg = cos(PI/count)/sin(PI/count);
    double square = (count*(pow(n,2))*ctg)/4;  
    return square;
}
