#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int length,i,j;

    printf("Enter the size of your array: ");

    scanf("%i",&length);

    float* mas = (float*) malloc(sizeof(float)*length);

    printf("Start filling your array: \n");
    for (i=0;i<length;i++)
    {
        printf("Element[%i] = ",i+1);
        scanf("%f",&mas[i]);
    }

    float** mas2;

    mas2 = (float**)malloc(sizeof(float*)*length);
    for(int k = 0; k<length;k++)
    mas2[k] = (float*)malloc(sizeof(float)*length);

    for (i=0;i<length;i++)
        for (j=0;j<length;j++)
            {
                mas2[j][i] = mas[i] / length;
            }

    for (i=0;i<length;i++)
        for (j=0;j<length;j++)
        {
            printf("Element[%i][%i] = %.2f\n",i+1,j+1,mas2[i][j]);
        }

        free(mas);
        free(mas2);

        return 0;
}
