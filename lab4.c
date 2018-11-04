#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, k, max, j=0;

    printf("Enter the size of your array: ");
    do
    {
        scanf("%i",&n);
    }
    while (n<1||n>50);

    int mas[n];

    printf("Start filling your array: \n");
    for (i=0;i<n;i++)
    {
        printf("Element%i = ",i+1);
        scanf("%i",&mas[i]);
    }

    printf("TASK2\n");
    printf("Choose the possition from where to take out elements: ");
    scanf("%i",&k);

    if (k!=0)
    {
            printf("%i\n",mas[k]);
            printf("%i\n",mas[k-1]);
    }
    else if (k==0)
    {
        printf("%i\n",mas[k]);
        printf("%i\n",mas[n]);
    }


    printf("TASK3 and TASK4\n");
    max=mas[0];
    for (i=0;i<n;i++)
    {
        if (mas[i]>max)
        {
            max=mas[i];
        }
    }

    int mas2[n];

    for (i=0;i<n;i++)
    {
        if (mas[i]!=max)
        {
        mas2[j]=mas[i];
        j++;
        }
        else if (mas[i]==max)
        {
            i++;
        }
    }

    if (k==n)
    {
        printf("%i\n",mas[n]);
        printf("%i\n",mas[0]);
    }
    else
    {
        printf("%i\n",mas[k]);
        printf("%i\n",mas[k+1]);
    }
}
