#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int length,i,j;

    printf("Enter the size of your array: ");

    scanf("%i",&length);

    float mas[length];

    printf("Start filling your array: \n");
    for (i=0;i<length;i++)
    {
        printf("Element[%i] = ",i+1);
        scanf("%f",&mas[i]);
    }

    float mas2[length][length];

    for (i=0;i<length;i++)
        for (j=0;j<length;j++)
            {
                mas2[j][i] = mas[i] / length;
            }

    for (i=0;i<length;i++)
        for (j=0;j<length;j++)
        {
            printf("Element[%i][%i] = %f\n",i+1,j+1,mas2[i][j]);
        }
}
